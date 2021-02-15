class Solution {
    public void reverseString(char[] s) {
        int size = s.length;
        
        if(size == 0){ 
           return;
        }
        char[] rev = new char[size];
        
        int j = 0;
        for(int i=size-1; i>=0; i--){ 
            rev[j] = s[i];
            j++;
        }
        
        for(j=0; j<size; j++){ 
          s[j] = rev[j];
        }
    }
}