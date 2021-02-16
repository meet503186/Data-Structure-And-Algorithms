import java.util.*;
import java.lang.*;
import java.io.*;

class Rearrange
{
    public static void bruteForce(int arr[], int n){

        int positive[] = new int[n];
        int negative[] = new int[n];
        int pos, neg, i;
        pos = neg = 0;
    
        for(i=0; i<n; i++){
            if(arr[i] >= 0){
                positive[pos] = arr[i];
                pos++;
            }else{
                negative[neg] = arr[i];
                neg++;
            }
        }
    
        int numPos = pos;
        int numNeg = neg;
        
        pos = neg = i = 0;
    
        while(i<n && pos<numPos && neg<numNeg){
            if(i%2==0 || i==0){
                arr[i++] = negative[neg++];
            }else{
                arr[i++] = positive[pos++];
            }
        }
    
        while (pos<numPos)
        {
            arr[i++] = positive[pos++];
        }
        
        while (neg<numNeg)
        {
            arr[i++] = negative[neg++];
        }
    
        for(i=0; i<n; i++){
            System.out.print(arr[i] + " ");
        }
    }
    
    public static void rightRotate(int arr[], int n, int outOfPlace, int index){
    int temp = arr[index];
    for(int i=index; i>outOfPlace; i--){
        arr[i] = arr[i-1];
    }
    arr[outOfPlace] = temp;
    }
    
    public static void optimal(int arr[], int n){
        int outOfPlace = -1;
        for(int index=0; index<n; index++){
            if(outOfPlace >= 0){
                if(arr[index] < 0 && index % 2 != 0){
                    rightRotate(arr, n, outOfPlace, index);
    
                    if(index - outOfPlace >= 2){
                        outOfPlace = outOfPlace + 2;
                    }else{
                        outOfPlace = -1;
                    }
                }
            }else{
                if((arr[index] < 0 && index % 2 != 0) || (arr[index] > 0 && index % 2 == 0)){
                    outOfPlace = index;
                }
            }
        }
    
        for(int i=0; i<n; i++){
            System.out.print(arr[i] + " ");
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		int arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
		int n = arr.length;
		
		System.out.print("using bruteForce approach :- ");
		bruteForce(arr,n);
		
		System.out.println();
		
		System.out.print("using optimal approach :- ");
		optimal(arr,n);
	}
}
