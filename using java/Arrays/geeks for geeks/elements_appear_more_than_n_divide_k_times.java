import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void simple(int arr[], int n, int k){
       if(k < 2){
           return;
       }
        Arrays.sort(arr);
        
        int find[] = new int[n];
        int j = 0;
        int condition = n/k;
        int count = 0;

        for(int i=0; i<n-1; i++){
            if(arr[i] == arr[i+1]){
                count++;
            }
            if(count >= condition){
                find[j] = arr[i-1];
                j++;
                count = 0;
            }
            if(arr[i] != arr[i+1]){
                count = 0;
            }
        }
        
        for(int i=0; i<j; i++){
            System.out.print(find[i] + " ");
        }
        System.out.println();
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
		int n = arr.length;
		int k = 4;
		
		System.out.print("using simple approach :- ");
        simple(arr,n,k);
    }
}
