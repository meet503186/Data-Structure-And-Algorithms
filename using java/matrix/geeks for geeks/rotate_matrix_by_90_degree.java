/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
	    Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
    	
    	int arr[][] = new int[n][n];
    	int i, j;
    	
    	for(i=0; i<n; i++){
    	    for(j=0; j<n; j++){
    	        arr[i][j] = sc.nextInt();
    	    }
    	}
    	
    	for(j=0; j<n; j++){
    	    for(i=n-1; i>=0; i--){
    	        System.out.print(arr[i][j] + " ");
    	    }
    	    System.out.println();
    	}
	}
}