#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {   
        unordered_map<string,int> mp;
        string ans;
        int mx = 0;
        int smx = INT_MIN;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
            mx = max(mx, mp[arr[i]]);
        }
        
        for(auto m : mp){
            if(m.second > smx && mx != m.second){
                smx = m.second;
                ans = m.first;
            }
        }
        return ans;
    }
};

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}