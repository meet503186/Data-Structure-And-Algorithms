#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}

int reverse(int x){
    int rev = 0, rem;
    
    while(x > 0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x = x / 10;
    }
    return rev;
}

int PalinArray(int arr[], int n)
{  
    int count = 0;
    
    for(int i=0; i<n; i++){
        int rev = reverse(arr[i]);
        
        if(arr[i] == rev){
            count++;
        }
    }
    
    if(count == n){
        return 1;
    }
    return 0;
}