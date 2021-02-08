
    import java.util.*;
    class PalindromicArray{
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
            {
                int n = sc.nextInt();
                int[] a = new int[n];
                for(int i = 0 ;i < n; i++)
                    a[i]=sc.nextInt();
                GfG g = new GfG();
                System.out.println(g.palinArray(a , n));
            }
        }
    }

    class GfG
    {
        public static int reverse(int x){
           int rev = 0, rem;
        
            while(x > 0){
                rem = x % 10;
                rev = rev * 10 + rem;
                x = x / 10;
            }
            return rev;
        }
        
        public static int palinArray(int[] arr, int n)
               {
                    int count = 0;
        
                    for(int i=0; i<n; i++){
                        int rev = reverse(arr[i]);
                        
                        if(arr[i] == rev){
                            count++;
                        }
                    }
                    
                    if(count == n){
                        return 1;
                    }
                    return 0;
               }
    }