import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{   
    public static void commonElements(int [][]matrix, int n, int m){
        Map<Integer,Integer> h = new HashMap<>();
        
        // Initialize the first row elements with value 1
        for(int j=0; j<m; j++){
            h.put(matrix[0][j],1);
        }
        
        // traverse the matrix except first row 
        for(int i=1; i<n; i++){
            for (int j=0; j<m; j++){
                
                // if element is present in the map and is not duplicated in the current row
                if(h.get(matrix[i][j])!=null && h.get(matrix[i][j]) == i){
                    h.put(matrix[i][j],i+1);
                    
                    // if this is last row
                    if(i==n-1){
                        System.out.print(matrix[i][j] + " ");
                    }
                }
            } 
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
	    
	    int n = sc.nextInt();
	    int m = sc.nextInt();
	    
	    int [][]matrix = new int[n][m];
	    
	    for (int i=0; i<n; i++){
	        for(int j=0; j<m; j++){
	            matrix[i][j] = sc.nextInt();
	        }
	    } 
	    
	   commonElements(matrix, n, m); 
	}
}
