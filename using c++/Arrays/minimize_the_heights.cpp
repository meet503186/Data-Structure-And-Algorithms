#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
       
       if(n == 1){
           return 0;
       }
       
       sort(arr, arr + n);
       
       vector<int> maxs(n), mins(n);
       
       for(int i=0; i<n; ++i){
           maxs[i] = arr[i] + k;
           mins[i] = arr[i] - k;
       }
       
       int index = 0;
       int ans = arr[n-1] - arr[0];
        
        while(index < n && mins[index] < 0){
            index++;
        }
       

       if(index == n){
           return ans;
       }
       
       if(index == 0){
           index++;
       }
       
       for(int i=index; i<n; ++i) {
            int Max = max(mins[n-1], maxs[i-1]);
            int Min = min(mins[i], maxs[0]);
            ans = min(ans, Max - Min);
        }
        
        return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}