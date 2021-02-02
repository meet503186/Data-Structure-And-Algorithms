#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool val = next_permutation(nums.begin(), nums.end());
        
        if(val == false){
            sort(nums.begin(), nums.end());
            for(auto i=nums.begin(); i!=nums.end(); i++){
                cout<<*i<<" ";    
            }
            cout<<endl;
        }else{
            for(auto i=nums.begin(); i!=nums.end(); i++){
                cout<<*i<<" ";    
            }
            cout<<endl;
        }
    }
};

int main(){

    vector<int> nums = {1,2,3};

    Solution ob1;
    ob1.nextPermutation(nums);

    return 0;
}