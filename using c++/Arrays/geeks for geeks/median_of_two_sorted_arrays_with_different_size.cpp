#include<bits/stdc++.h>
using namespace std;

void merge(int* arr1, int n, int* arr2, int m, int* merged)
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            merged[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            merged[k] = arr1[i];
            k++;
            i++;
        }
    }

    while (i < n)
    {
        merged[k] = arr1[i];
        k++;
        i++;
    }

    while (j < m)
    {
        merged[k] = arr2[j];
        k++;
        j++;
    }
    
}

int findMedian(int* arr1, int n, int* arr2, int m)
{
    int median, size = n+m;
    int merged[size];
    merge(arr1, n, arr2, m, merged);
    if(size % 2 == 0){
        median = (merged[size/2] + merged[(size/2)-1])/2;
    }else
    {
        median = merged[size/2];
    }
    
    return median;
}

int main()
{

    int arr1[] = {900};
    int arr2[] = {5, 8, 10, 20};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int median = findMedian(arr1, n, arr2, m);
    cout<<median<<endl;
    return 0;
}
