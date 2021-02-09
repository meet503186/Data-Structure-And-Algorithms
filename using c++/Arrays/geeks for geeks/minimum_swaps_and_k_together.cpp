#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}

int minSwap(int *arr, int n, int k) {
    int count = 0, bad = 0, ans = 0, i = 0, j = 0;
    
    for(i=0; i<n; i++){
        if(arr[i] <= k){
            count++;
        }
    }
   
    for(i=0; i<count; i++){
        if(arr[i] > k){
            bad++;
        }
    }
    
    i=0,j=count;
    
    ans = bad;
    
    while(j<n){
        if(arr[i] > k){
            bad--;
        }
        
        if(arr[j] > k){
            bad++;
        }
        
        ans = min(ans,bad);
        i++;
        j++;
    }
    return ans;
}
