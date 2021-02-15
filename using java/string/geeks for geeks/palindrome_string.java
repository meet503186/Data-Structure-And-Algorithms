import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S = read.readLine();
            
            Solution ob = new Solution();
            System.out.println(ob.isPlaindrome(S));
        }
    }
}

class Solution {
    int isPlaindrome(String S) {
        int n = S.length();
        int i=0, j=n-1, palindrom = 1;
        
        if(n == 0){
            return 0;
        }
        while(i<j){
            
            if(S.charAt(i) != S.charAt(j)){
                palindrom = 0;
                break;
            }
            i++;
            j--;
        }
        return palindrom;
    }
};