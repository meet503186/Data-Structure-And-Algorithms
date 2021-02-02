import java.util.*;
import java.io.*;

class Solution {
    public static int findDuplicate(int[] nums) {
        Arrays.sort(nums);
        
        int n = nums.length;
        
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

    public static void main(String[] args) {
        int arr[] = {1,2,3,1};

        int ans = findDuplicate(arr);

        System.out.println(ans);
    }
}