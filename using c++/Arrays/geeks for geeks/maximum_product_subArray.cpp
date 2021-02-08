#include <bits/stdc++.h>

using namespace std;

class Solution{
public:

	long long maxProduct(int *arr, int n) {
	    long long max_temp = arr[0];
	    long long min_temp = arr[0];
	    long long max_final = arr[0];
	    
	    for(int i=1; i<n; i++){
	        if(arr[i] < 0){
	            swap(max_temp, min_temp);
	        }
	        
	        max_temp = max((long long) arr[i], max_temp * arr[i]);
	        min_temp = min((long long) arr[i], min_temp * arr[i]);
	        
	        if(max_temp > max_final){
	            max_final = max_temp;
	        }
	    }
	   
	    return max_final;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}