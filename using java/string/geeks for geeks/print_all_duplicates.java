import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void find_duplicates(String str, int n){
        Map<Character,Integer> hm = new HashMap<>();
        
        for(int i=0; i<n; i++){
            if(hm.containsKey(str.charAt(i)) == false){
                hm.put(str.charAt(i),1);
            }else{
                hm.put(str.charAt(i),hm.get(str.charAt(i)) + 1);
            }
        }
        
        for(Map.Entry e : hm.entrySet()){
            char key = (char)e.getKey();
            int value = ((int)e.getValue());
            if(value > 1){
                System.out.println(key +", count = "+ value);
            }
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		String str = "teststring";
        int n = str.length();
        
        find_duplicates(str,n);
	}
}
