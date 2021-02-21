import java.io.*;
import java.util.*;
class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int r = sc.nextInt();
            int c = sc.nextInt();
            
            int matrix[][] = new int[r][c];
            
            for(int i = 0; i < r; i++)
            {
                for(int j = 0; j < c; j++)
                    matrix[i][j] = sc.nextInt();
            }
            Solution ob = new Solution();
            ArrayList<Integer> ans = ob.spirallyTraverse(matrix, r, c);
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    }
}


class Solution{
    static ArrayList<Integer> spirallyTraverse(int matrix[][], int r, int c)
    {
        int minr = 0;
        int minc = 0;
        int maxr = r-1;
        int maxc = c-1;
        int total = r*c;
        int i,j,count=0;
        
        ArrayList<Integer> al = new ArrayList<>();
        while(count < total) {
            
            // top wall
            for(i=minr,j=minc; j<=maxc && count < total; j++) {
                al.add(matrix[i][j]);
                count++;
            }
            minr++;
            
            // right wall
            for(i=minr,j=maxc; i<=maxr && count < total; i++) {
                al.add(matrix[i][j]);
                count++;
            }
            maxc--;
            
            // bottom wall
            for(i=maxr,j=maxc; j>=minc && count < total; j--) {
                al.add(matrix[i][j]);
                count++;
            }
            maxr--;
            
            // left wall
            for(i=maxr,j=minc; i>=minr && count <total; i--) {
                al.add(matrix[i][j]);
                count++;
            }
            minc++;
        }
        return al;
    }
}
