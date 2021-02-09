import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static int minDiff(int arr[], int n, int m){
        Arrays.sort(arr);
        int i=0, j=m-1, diff  = Integer.MAX_VALUE;
        
        while(i<j && j<n){
            if(diff > (arr[j] - arr[i])){
                diff = arr[j] - arr[i];
            }
            i++;
            j++;
        }
        if(diff == Integer.MAX_VALUE){
            diff = 0;
        }
        return diff;
    }
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		
		while(t-- > 0){
		    int n;
		    n = sc.nextInt();
		    
		    int arr[] = new int[n];
		    for(int i=0; i<n; i++){
		        arr[i] = sc.nextInt();
		    }
		    
		    int m;
		    m = sc.nextInt();
		    
		    int ans = minDiff(arr, n, m);
		    System.out.println(ans);
		}
	}
}