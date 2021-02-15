class Solution {
public:
    void reverseString(vector<char>& s) {
       int size = s.size();
        
        if(size == 0){
           return;
        }
        
        char rev[size];
        int j = 0;
        
        for(int i=size-1; i>=0; i--){ 
            rev[j] = s[i];
            j++;
        
        }
        
        for(j=0; j<size; j++){ 
           s[j] = rev[j];
        }
    }
};