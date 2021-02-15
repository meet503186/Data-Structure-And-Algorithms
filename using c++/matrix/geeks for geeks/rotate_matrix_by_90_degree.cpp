#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
	
	int arr[n][n], i, j;
	
    // taking user input
	for(i=0; i<n; i++){
	    for(j=0; j<n; j++){
	        cin>>arr[i][j];
	    }
	}
	
    // rotating and printing the matrix
	for(j=0; j<n; j++){
	    for(i=n-1; i>=0; i--){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}