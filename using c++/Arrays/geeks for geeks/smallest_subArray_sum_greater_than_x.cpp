#include <bits/stdc++.h>
using namespace std;

int sb(int arr[], int n, int x);

int main() {

	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		
		cout<<sb(a,n,x)<<endl;
	}
	return 0;
}

int sb(int arr[], int n, int x)
{
    int i=0,j = 0, temp_count = 0, min_count = INT_MAX, sum=0;
    
    for(i=0; i<n; i++){
        
        sum += arr[i];
        temp_count++;
        
        if(sum > x){
            j++;
            i = j-1;
            sum = 0;
            
            if(min_count > temp_count){
                min_count = temp_count;
            }
            temp_count = 0;
        }
    }
    
    if(min_count == INT_MAX){
        min_count = 1;
    }
    return min_count;
}