#include<bits/stdc++.h>
using namespace std;

void find_duplicates(char str[], int n){
    map<char,int> hm;

    for(int i=0; i<n; i++){
        hm[str[i]]++;
    }

    for(auto i : hm){
        if(i.second > 1){
            cout<<i.first<<", count = "<<i.second<<endl;
        }
    }
}

int main()
{
    char str[] = "teststring";
    int n = sizeof(str)/sizeof(str[0]);

    find_duplicates(str,n);
    return 0;
}