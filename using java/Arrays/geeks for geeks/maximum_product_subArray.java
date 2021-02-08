
    import java.io.*;
    import java.util.*;
    
      public class Main {
    
        public static void main(String[] args) throws Exception {
            BufferedReader br =
                new BufferedReader(new InputStreamReader(System.in));
            int tc = Integer.parseInt(br.readLine());
            while (tc-- > 0) {
                int n = Integer.parseInt(br.readLine());
                int[] arr = new int[n];
                String[] inputLine = br.readLine().split(" ");
                for (int i = 0; i < n; i++) {
                    arr[i] = Integer.parseInt(inputLine[i]);
                }
    
                System.out.println(new Solution().maxProduct(arr, n));
            }
        }
    }
    
    class Solution {
        
        long max(long i, long max_temp){
            if(i > max_temp){
                return i;
            }
            return max_temp;
        }
        
        long min(long i, long min_temp){
            if(i < min_temp){
                return i;
            }
            return min_temp;
        }
        
        long maxProduct(int[] arr, int n) {
            long max_temp = arr[0];
            long min_temp = arr[0];
            long max_final = arr[0];
            
            for(int i=1; i<n; i++){
                if(arr[i] < 0){
                    long temp = max_temp;
                    max_temp = min_temp;
                    min_temp = temp;
                }
                
                max_temp = max((long) arr[i], max_temp * arr[i]);
                min_temp = min((long) arr[i], min_temp * arr[i]);
                
                if(max_temp > max_final){
                    max_final = max_temp;
                }
            }
           
            return max_final;
        }
    }