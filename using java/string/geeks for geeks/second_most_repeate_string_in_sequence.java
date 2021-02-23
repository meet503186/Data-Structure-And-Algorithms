import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int n = sc.nextInt();
            String arr[] = new String[n];
            for(int i = 0;i<n;i++)
                arr[i] = sc.next();
            
            Solution ob = new Solution();
            
            System.out.println(ob.secFrequent(arr, n));
        }
    }
}

class Solution
{
    String secFrequent(String arr[], int n)
    {
        Map<String,Integer> mp = new HashMap<>();
        
        String ans = "";
        int mx = 0;
        int smx = Integer.MIN_VALUE;
        
        for(int i=0; i<n; i++){
            Integer j = mp.get(arr[i]);
            mp.put(arr[i], (j==null) ? 1 : j+1);
            mx = Math.max(mx, mp.get(arr[i]));
        }
        
        for(Map.Entry<String,Integer> m : mp.entrySet()){
            if(m.getValue() > smx && mx != m.getValue()){
                smx = m.getValue();
                ans = m.getKey();
            }
        }
        return ans;
    }
}