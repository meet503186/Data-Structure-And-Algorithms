#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    int n = S.size();
        int i=0, j=n-1, palindrom = 1;
        
        if(n == 0){
            return 0;
        }
        while(i<j){
            
            if(S[i] != S[j]){
                palindrom = 0;
                break;
            }
            i++;
            j--;
        }
        return palindrom;
	}

};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}