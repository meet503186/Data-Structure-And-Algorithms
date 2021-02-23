import java.util.*;
import java.io.*;
import java.lang.*;

class Driverclass
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        //Reading total number of testcases
        int t= sc.nextInt();
        
        while(t-- >0)
        {
            //reading the string
            String st = sc.next();
            
            //calling ispar method of Paranthesis class 
            //and printing "balanced" if it returns true
            //else printing "not balanced"
            if(new Parenthesis().ispar(st) == true)
                System.out.println("balanced");
            else
                System.out.println("not balanced");
        
        }
    }
}

class Parenthesis
{
    static boolean ispar(String x)
    {
        Stack<Character> st = new Stack<>();
    
        for(char c : x.toCharArray()){
            if(c == '{'){
                st.push('}');
            }else if(c == '['){
                st.push(']');
            }else if(c == '('){
                st.push(')');
            }else if(st.empty() == true || st.pop() != c){
                return false;
            }
        }
    
    return st.empty();
    }
}
