#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
    int jumps = 0, farthest = 0, currEnd = 0;
    for(int i=0;i<n-1;i++)
    {
        farthest = max(farthest, i + arr[i]);
        if(farthest >= n-1)
            return 1 + jumps;
        
        if(i == farthest)
            return -1;
        
        if(i == currEnd)
        {
            jumps++;
            currEnd = farthest;
        }
    }
    return jumps;
}

// int minJumps(int arr[], int n){
//     int jumps = 0, i = 0;
    
//     if(n == 1){
//         return 0;
//     }
    
//     if(arr[0] == 0){
//         return -1;
//     }
    
//     while(i < n-1){
//         i = arr[i] + i;
//         jumps++;
//     }
//     return jumps;
// }


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}