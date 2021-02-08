import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    public static boolean isSubset(int arr1[], int n, int arr2[], int m){
        boolean subset = false;
        int count = 0;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(arr2[i] == arr1[j]){
                    count++;
                    break;
                }
            }
        }
        
        if(count == m){
            subset = true;
        }
        return subset;
    }
    
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
		int t;
    	t = sc.nextInt();
    	
    	while(t-->0){
    	    int n,m,i;
    	    n = sc.nextInt();
    	    m = sc.nextInt();
    	    
    	    int arr1[] = new int[n];
    	    int arr2[] = new int[m];
    	    
    	    for(i=0; i<n; i++){
    	        arr1[i] = sc.nextInt();
    	    }
    	    
    	    for(i=0; i<m; i++){
    	        arr2[i] = sc.nextInt();
    	    }
    	    
    	    boolean subset = isSubset(arr1, n, arr2, m);
    	    
    	    if(subset == true){
    	        System.out.println("Yes");
    	    }else{
    	        System.out.println("No");
    	    }
    	}
	}
}