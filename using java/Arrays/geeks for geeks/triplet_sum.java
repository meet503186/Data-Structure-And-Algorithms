import java.util.*;
import java.io.*;
import java.lang.*;

class Sorting
{
    public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    String inputLine[] = br.readLine().trim().split(" ");
		    int n = Integer.parseInt(inputLine[0]);
		    int x = Integer.parseInt(inputLine[1]);
		    int arr[] = new int[n];
		    inputLine = br.readLine().trim().split(" ");
		    for(int i=0; i<n; i++){
		        arr[i] = Integer.parseInt(inputLine[i]);
		    }
		    System.out.println(new TripletSum().find3Numbers(arr, n, x));
		}
	}
}

class TripletSum
{
    
    public static int find3Numbers(int arr[], int N, int X) { 
    
        int triplet = 0;
        int j,k;
        
        for(int i=0; i<N; i++){
            j=i+1;
            k=j+1;
            
            while(j < N-1 && k < N){
               
                if(arr[i] + arr[j] + arr[k] == X){
                    triplet = 1;
                    break;
                }
                
                k++;
                if(k == N){
                    j++;
                    k = j+1;
                }
            }
            if(triplet == 1){
                break;
            }
        }
        return triplet;
    
    }
}
