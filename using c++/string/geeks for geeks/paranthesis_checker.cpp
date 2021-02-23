#include<bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    stack<char> st;
    
    for(int i=0; i<x.length(); i++){
        if(x[i] == '{'){
            st.push('}');
        }else if(x[i] == '['){
            st.push(']');
        }else if(x[i] == '('){
            st.push(')');
        }else if(st.empty() == true || st.top() != x[i]){
            return false;
        }else{
            st.pop();
        }
    }
    
    return st.empty();
}

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}