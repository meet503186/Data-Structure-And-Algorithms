    import java.io.*;
    import java.util.*;
    import java.lang.*;
    
    
    class Array {
    
        public static void main (String[] args) throws IOException {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int t = Integer.parseInt(br.readLine().trim());
            while(t-->0){
              
                int n = Integer.parseInt(br.readLine().trim());
                int arr[] = new int[n];
                String inputLine[] = br.readLine().trim().split(" ");
                
                for(int i=0; i<n; i++){
                    arr[i] = Integer.parseInt(inputLine[i]);
                }
                
                Trap obj = new Trap();
              
                System.out.println(obj.trappingWater(arr, n));
            }
        }
    }
    
    
    class Trap{
       
        static int trappingWater(int arr[], int n) { 
            
            int left_max = arr[0], right_max = arr[n-1], i = 0, j = n-1, water = 0;
        
            while(i < j){
                if(left_max < arr[i]){
                    left_max = arr[i];
                }
                if(right_max < arr[j]){
                    right_max = arr[j];
                }
                
                if(left_max > right_max){
                    water += right_max - arr[j--];
                }else{
                    water += left_max - arr[i++];
                }
            }
            return water;
            
        } 
    }
    
    