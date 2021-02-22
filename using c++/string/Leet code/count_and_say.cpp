#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
       
        if(n==1) return "1";
        if(n==2) return "11";
        
        string s = "11";
        
        for(int i=3; i<=n; i++){
            string temp = "";
            int count = 1;
           
            for(int j=1; j<=s.length(); j++){
                if(s[j] != s[j-1]){
                    // adding count in string                    
                    temp = temp + to_string(count);
                    
                    // adding number in string                    
                    temp = temp + s[j-1];
                    
                    count = 1;
                }else{
                    count++;
                }
            }
            s = temp;
        }
        return s;
    }
};

int main(){
    int n;
    cout<<"enter a number :- ";
    cin>>n;

    Solution ob;
    cout<<"count and say of "<<n<<" is :- "<<ob.countAndSay(n)<<endl;

    return 0;
}