
#include <bits/stdc++.h>

using namespace std;

int trappingWater(int arr[], int n)
{

    int left_max = arr[0], right_max = arr[n - 1], i = 0, j = n - 1, water = 0;

    while (i < j)
    {
        if (left_max < arr[i])
        {
            left_max = arr[i];
        }
        if (right_max < arr[j])
        {
            right_max = arr[j];
        }

        if (left_max > right_max)
        {
            water += right_max - arr[j--];
        }
        else
        {
            water += left_max - arr[i++];
        }
    }
    return water;
}

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cout << trappingWater(a, n) << endl;
    }

    return 0;
}