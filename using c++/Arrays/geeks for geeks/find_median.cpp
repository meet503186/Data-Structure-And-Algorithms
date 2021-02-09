#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    int median, n = v.size();
		    sort(v.begin(), v.end());
		    
		    if(n % 2 == 0){
		        median = (v[n/2] + v[(n/2)-1])/2;
		    }else{
		        median = v[n/2];
		    }
		    return median;
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}