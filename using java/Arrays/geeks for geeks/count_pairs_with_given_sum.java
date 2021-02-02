import java.io.*;
import java.util.*;

public class GFG {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int k = Integer.parseInt(inputLine[1]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            int ans = new Solution().getPairsCount(arr, n, k);
            System.out.println(ans);
        }
    }
}

class Solution {
    int getPairsCount(int[] arr, int n, int k) {
        int count = 0, i;
        
        HashMap<Integer,Integer> map = new HashMap<>();
        
        
        for(i=0; i<n; i++){
           if(!map.containsKey(arr[i])){
            map.put(arr[i],0);
           }
           
           map.put(arr[i],map.get(arr[i]) + 1);
        }
        
        for(i=0; i<n; i++){
            if(map.get(k - arr[i]) != null){
                count += map.get(k - arr[i]);
            }
            
            if(k - arr[i] == arr[i]){
                count--;
            }
        }
        
        return count/2;
    }
    
}
