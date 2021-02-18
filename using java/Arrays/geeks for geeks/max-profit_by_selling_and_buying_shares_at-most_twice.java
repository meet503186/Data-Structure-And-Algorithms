import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{   
    // time complexity :- O(n)
    // space complexity :- O(n)
    public static int dP(int price[], int n){
        int profit[] = new int[n];
        int max_price, min_price,i;
        
        for(i = 0; i < profit.length; i++) {
            profit[i] = 0;
        }
        
        max_price = price[n-1];
        min_price = price[0];
        
        for(i=n-2; i>=0; i--){
            if(max_price < price[i]){
                max_price = price[i];
            }
            profit[i] = Math.max(profit[i+1], max_price - price[i]);
        }
        
        for(i=1; i<n; i++){
            if(min_price > price[i]){
                min_price = price[i];
            }
            profit[i] = Math.max(profit[i-1], profit[i]+(price[i] - min_price));
        }
        return profit[n-1];
    }
    
    // time complexity :- O(n)
    // space complexity :- O(1)
    public static int efficient(int price[], int n){
        int buy1, buy2, profit1, profit2;
        
        buy1 = buy2 = Integer.MAX_VALUE;
        profit1 = profit2 = 0;
        
        for (int i=0; i<n; i++){
            
            buy1 = Math.min(buy1, price[i]);
            
            profit1 = Math.max(profit1, price[i] - buy1);
            
            buy2 = Math.min(buy2, price[i] - profit1);
            
            profit2 = Math.max(profit2, price[i] - buy2);
        } 
        return profit2;
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		int price[] = {3,5,0,1,4};
		int n = price.length;
		
	    int maxProfit = dP(price, n);
	    System.out.println(maxProfit);
        
        maxProfit = efficient(price, n);
	    System.out.println(maxProfit);
        
	}
}
