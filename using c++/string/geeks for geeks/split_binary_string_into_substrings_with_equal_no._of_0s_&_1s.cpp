#include <iostream>
using namespace std;

void countSubString(string str, int n){
    int count0 = 0;
    int count1 = 0;
    int count = -1;
    
    if(n != 0){
        for(int i=0; i<n; i++){
            if(str[i] == '0'){
                count0++;
            }
            if(str[i] == '1'){
                count1++;
            }
            if(count0 == count1){
                count++;
            }
        }
        if(count != -1){
            count = count + 1;
        }
    }
    cout<<count<<endl;
}
int main() {
	string str = "0111100010";
	int n = str.length();
	
	countSubString(str, n);
	return 0;
}
