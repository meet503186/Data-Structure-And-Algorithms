#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i,j,k;
            unordered_set<int> comEle;
            i = j = k = 0;
            
            while(i<n1 && j<n2 && k<n3){
                if(A[i] == B[j] && A[i] == C[k]){
                    comEle.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                
                if(A[i] < B[j] || A[i] < C[k]){
                    i++;
                }
                
                if(B[j] < A[i] || B[j] < C[k]){
                    j++;
                }
                
                if(C[k] < A[i] || C[k] < B[j]){
                    k++;
                }
            }
            
            vector<int> result;
            result.insert(result.end(), comEle.begin(), comEle.end());
            sort(result.begin(),result.end());
            return result;
        }

};


int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}