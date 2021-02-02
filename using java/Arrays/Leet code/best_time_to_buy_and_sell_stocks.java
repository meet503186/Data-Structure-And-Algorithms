/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class Solution {
    public static int maxProfit(int[] prices) {
        int buyIdx, sellIdx, sell, buy, max_profit = 0, profit = 0;
        buy = prices[0];
        buyIdx = sellIdx = sell = 0;
        
        for(int i=1; i<prices.length; i++){
            if(prices[i] < buy && i!=prices.length-1){
                buy = prices[i];
                buyIdx = i;
            }
            
            System.out.println(buy);
            
            if(prices[i] > buy){
                sell = prices[i];
                sellIdx = i;
            }
            
            if(sellIdx > buyIdx){
                profit = sell - buy;
                
            }
            
            if(max_profit < profit){
                max_profit = profit;
            }
        }
        return max_profit;
    }
    
    public static void main (String[] args) throws java.lang.Exception
	{
		int arr[] = {2,1,2,0,1};
		int ans = maxProfit(arr);
		System.out.println(ans);
	}
}