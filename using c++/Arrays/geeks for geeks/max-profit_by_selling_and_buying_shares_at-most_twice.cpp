#include <bits/stdc++.h>
using namespace std;

// time complexity :- O(n)
// space complexity :- O(n)
int dP(int price[], int n)
{
    int profit[n];
    int max_price, min_price, i;

    for (i = 0; i < n; i++)
    {
        profit[i] = 0;
    }

    max_price = price[n - 1];
    min_price = price[0];

    for (i = n - 2; i >= 0; i--)
    {
        if (max_price < price[i])
        {
            max_price = price[i];
        }
        profit[i] = max(profit[i + 1], max_price - price[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (min_price > price[i])
        {
            min_price = price[i];
        }
        profit[i] = max(profit[i - 1], profit[i] + (price[i] - min_price));
    }
    return profit[n - 1];
}

// time complexity :- O(n)
// space complexity :- O(1)
int efficient(int price[], int n)
{
    int buy1, buy2, profit1, profit2;

    buy1 = buy2 = INT_MAX;
    profit1 = profit2 = 0;

    for (int i = 0; i < n; i++)
    {

        buy1 = min(buy1, price[i]);

        profit1 = max(profit1, price[i] - buy1);

        buy2 = min(buy2, price[i] - profit1);

        profit2 = max(profit2, price[i] - buy2);
    }
    return profit2;
}

int main()
{
    int price[] = {3, 5, 0, 1, 4};
    int n = sizeof(price) / sizeof(price[0]);

    int maxProfit = dP(price, n);
    cout << maxProfit<<endl;

    maxProfit = efficient(price, n);
    cout << maxProfit<<endl;

    return 0;
}