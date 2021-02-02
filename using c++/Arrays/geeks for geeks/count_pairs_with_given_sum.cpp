#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        int twice_count = 0, i;
        
        unordered_map<int,int> map;
         
        for(i=0; i<n; i++){
            map[arr[i]]++;
        }
        
        for(i=0; i<n; i++){
            twice_count += map[k - arr[i]];
            
            if(k - arr[i] == arr[i]){
                twice_count--;
            }
        }
        
        return twice_count/2;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends