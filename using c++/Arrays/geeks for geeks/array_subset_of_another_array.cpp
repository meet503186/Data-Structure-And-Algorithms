#include <iostream>
using namespace std;

bool isSubset(int arr1[], int n, int arr2[], int m){
    bool subset = false;
    int count = 0;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr2[i] == arr1[j]){
                count++;
                break;
            }
        }
    }
    
    cout<<count<<endl;
    if(count == m){
        subset = true;
    }
    return subset;
}

int main() {
	
	int t;
    cout<<"enter the no. of test cases :- "<<endl;
	cin>>t;
	
	while(t-->0){
	    int n,m,i;
        cout<<"enter the size of array 1 and 2 respectively :- ";
	    cin>>n>>m;
	    
	    int arr1[n],arr2[m];
	    
        cout<<"enter the elements of array 1 :- ";
	    for(i=0; i<n; i++){
	        cin>>arr1[i];
	    }
	    
        cout<<"enter the elements of array 2 :- ";
	    for(i=0; i<m; i++){
	        cin>>arr2[i];
	    }
	    
	    bool subset = isSubset(arr1, n, arr2, m);
	    
	    if(subset){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}