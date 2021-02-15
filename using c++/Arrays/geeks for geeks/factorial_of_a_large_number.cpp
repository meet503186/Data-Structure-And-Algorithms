#include <iostream>
using namespace std;
int multiply(int size, int ans[], int i){
    int carry = 0;
    
    for(int j=0; j<size; j++){
        int product = ans[j] * i + carry;
        ans[j] = product % 10;
        carry = product / 10;
    }
    
    while(carry > 0){
        ans[size] = carry % 10;
        carry = carry / 10;
        size++;
    }
    return size;
}
void fact(int n){
    int size = 1, ans[10000], i;
    ans[0] = 1;
    
    for(i=2; i<=n; i++){
        size = multiply(size, ans, i);
    }
    
    for(i=size-1; i>=0; i--){
        cout<<ans[i];
    }
    cout<<endl;
}
int main() {
	int t;
	cin>>t;
	
	while(t-->0){
	    int n;
	    cin>>n;
	    fact(n);
	}
	return 0;
}