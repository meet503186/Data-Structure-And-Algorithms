
#include <bits/stdc++.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        rotate(a, n);
        for (i = 0; i < n; i++)
        {
            cout << a[i];
        }

        cout << endl;
    }

    return 0;
}

void rotate(int arr[], int n)
{
    int a[n], i = 1, j = 0;
    a[0] = arr[n - 1];

    while (i < n && j < n - 1)
    {
        a[i] = arr[j];
        i++;
        j++;
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }
}