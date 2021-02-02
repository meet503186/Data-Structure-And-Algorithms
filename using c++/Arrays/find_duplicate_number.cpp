#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        if(n == 1){
            return 0;
        }
        
        int num = nums[0];
        
        
        for(int i=1; i<n; i++){
            if(num == nums[i]){
                return num;
            }
            num = nums[i];
        }
        
        return num;
    }
};

int main()
{
    vector<int> nums = {1,2,3,1};

    Solution ob1;

    int ans = ob1.findDuplicate(nums);
    
    cout<<ans<<endl;
    return 0;
}