import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int multiply(int size, int ans[], int i){
        int carry = 0;
        
        for(int j=0; j<size; j++){
            int product = ans[j] * i + carry;
            ans[j] = product % 10;
            carry = product / 10;
        }
        
        while(carry > 0){
            ans[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
        return size;
    }
    
    public static void fact(int n){
        int size = 1, i;
        int  ans[] = new int[10000];
        ans[0] = 1;
        
        for(i=2; i<=n; i++){
            size = multiply(size, ans, i);
        }
        
        for(i=size-1; i>=0; i--){
            System.out.print(ans[i]);
        }
        System.out.println();
    }
    
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		while(t-- > 0){
		    int n = sc.nextInt();
		    fact(n);
		}
	}
}