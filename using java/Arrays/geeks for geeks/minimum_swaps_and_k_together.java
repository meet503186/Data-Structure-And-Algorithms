import java.io.*;
import java.util.*;


class Array {
    
	public static void main (String[] args) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int testcases = Integer.parseInt(br.readLine());
		
		
		while(testcases-- > 0){
		    String line = br.readLine();
		    String[] element = line.trim().split("\\s+");
		    int sizeOfArray = Integer.parseInt(element[0]);
		     
		    int arr [] = new int[sizeOfArray];
		    
		    line = br.readLine();
		    String[] elements = line.trim().split("\\s+");
		    for(int i = 0;i<sizeOfArray;i++){
		        arr[i] = Integer.parseInt(elements[i]);
		    }
		    int K = Integer.parseInt(br.readLine());
		    
		    Complete obj = new Complete();
		    int ans = obj.minSwap(arr, sizeOfArray, K);
		    System.out.println(ans);
		}
	}
}

class Complete{
    
    public static int minSwap (int arr[], int n, int k) {
        int count = 0, bad = 0, ans = 0, i = 0, j = 0;
    
        for(i=0; i<n; i++){
            if(arr[i] <= k){
                count++;
            }
        }
       
        for(i=0; i<count; i++){
            if(arr[i] > k){
                bad++;
            }
        }
        
        i = 0;
        j=count;
        
        ans = bad;
        
        while(j<n){
            if(arr[i] > k){
                bad--;
            }
            
            if(arr[j] > k){
                bad++;
            }
            
            if(ans > bad){
                ans = bad;
            }
            i++;
            j++;
        }
        return ans;
    }
    
    
}
