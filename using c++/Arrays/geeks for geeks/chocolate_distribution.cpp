#include <bits/stdc++.h>
using namespace std;

int minDiff(int *arr, int n, int m){
    sort(arr, arr + n);
    int i=0, j=m-1, diff = INT_MAX;
    
    while(i<j && j<n){
        if(diff > (arr[j] - arr[i])){
            diff = arr[j] - arr[i];
        }
        i++;
        j++;
    }
    if(diff == INT_MAX){
        diff = 0;
    }
    return diff;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t-- > 0){
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    
	    int m;
	    cin>>m;
	    
	    int ans = minDiff(arr,n,m);
	    cout<<ans<<endl;
	}
	return 0;
}