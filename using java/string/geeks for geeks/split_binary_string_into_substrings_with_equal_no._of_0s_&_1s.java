import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    
    public static void countSubString(String str, int n){
        int count0 = 0;
        int count1 = 0;
        int count = -1;
        if(n != 0){
            for(int i=0; i<n; i++){
                if(str.charAt(i) == '0'){
                    count0++;
                }
                if(str.charAt(i) == '1'){
                    count1++;
                }
                if(count0 == count1){
                    count++;
                }
            }
            if(count != -1){
                count = count + 1;
            }
        }
        System.out.println(count);
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		String str = "0111100010";
    	int n = str.length();
    	
    	countSubString(str, n);
	}
}
