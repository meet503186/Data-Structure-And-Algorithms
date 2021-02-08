
import java.util.Scanner;
import java.util.*;
import java.util.HashSet;

class Driverclass
{
   
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t>0)
		{
			int n = sc.nextInt();
			int a[] = new int[n];
			
			for(int i=0; i<n; i++)
				a[i] = sc.nextInt();
		    
		    
			Subseq g = new Subseq();
			
			System.out.println(g.findLongestConseqSubseq(a, n));
		
		t--;
		}
	}
}

class Subseq
{   
	static int findLongestConseqSubseq(int arr[], int N)
	{
	    
	      Arrays.sort(arr);
	    
	      int count = 0;
          int result = 0;
         
          if(N == 1){
              return 1;
          }
          for(int i=0; i<N-1; i++){
              if(arr[i] + 1 == arr[i+1]){
                  count++;
              }else if(arr[i] == arr[i+1]){
                  continue;
              }else{
                  count = 0;
              }
              
              if(count+1 > result){
                  result = count+1;
              }
          }
          return result;
	}
}