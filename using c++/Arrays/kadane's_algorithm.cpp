
#include<bits/stdc++.h>
using namespace std;


// Function to find subarray with maximum sum

int maxSubarraySum(int arr[], int n){
    
    int max=0, Max=-1;
    
    for(int i=0; i<n; i++){
        max = max + arr[i];
        
        if(max > Max){
            Max = max;
        }
        
        if(max < 0){
            max = 0;
        }
    }
    return Max;
}

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}