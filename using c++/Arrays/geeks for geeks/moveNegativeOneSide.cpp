#include <iostream>
using namespace std;

void rearrange(int* arr, int n){
    int start = 0, iterate=n-1;

    while (start < iterate)
    {
        if (arr[start] > 0 && arr[iterate] < 0)
        {
            int temp = arr[start];
            arr[start] = arr[iterate];
            arr[iterate] = temp;
            start++;
            iterate--;
        }else if (arr[start] < 0 && arr[iterate] < 0)
        {
            start++;
        }
        else{
            iterate--;
        }
    }
    
}

int main()
{
    
    int arr[50],n;
    cout<<"enter the size of array :- ";
    cin>>n;

    cout<<"enter the elements :- ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    rearrange(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
