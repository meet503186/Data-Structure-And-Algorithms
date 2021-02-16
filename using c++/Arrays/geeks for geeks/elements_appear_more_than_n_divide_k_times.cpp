#include <bits/stdc++.h>
using namespace std;

void simple(int arr[], int n, int k)
{
    if (k < 2)
    {
        return;
    }

    sort(arr, arr + n);

    int find[n];
    int j = 0;
    int condition = n / k;
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        if (count >= condition)
        {
            find[j] = arr[i - 1];
            j++;
            count = 0;
        }
        if (arr[i] != arr[i + 1])
        {
            count = 0;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout<<find[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;

    cout<<"using simple approach :- ";
    simple(arr, n, k);
}