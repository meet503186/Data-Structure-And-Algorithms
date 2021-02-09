import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{   
    public static void merge(int arr1[], int n, int arr2[], int m, int merged[])
    {
        int i = 0, j = 0, k = 0;
    
        while (i < n && j < m)
        {
            if (arr1[i] > arr2[j])
            {
                merged[k] = arr2[j];
                k++;
                j++;
            }
            else
            {
                merged[k] = arr1[i];
                k++;
                i++;
            }
        }
    
        while (i < n)
        {
            merged[k] = arr1[i];
            k++;
            i++;
        }
    
        while (j < m)
        {
            merged[k] = arr2[j];
            k++;
            j++;
        }
        
    }
    
    public static int findMedian(int arr1[], int n, int arr2[], int m)
    {
        int median, size = n+m;
        int merged[] = new int[size];
        merge(arr1, n, arr2, m, merged);
        if(size % 2 == 0){
            median = (merged[size/2] + merged[(size/2)-1])/2;
        }else
        {
            median = merged[size/2];
        }
        
        return median;
    }

	public static void main (String[] args) throws java.lang.Exception
	{
		int arr1[] = {900};
        int arr2[] = {5, 8, 10, 20};
        int n = arr1.length;
        int m = arr2.length;
    
        int median = findMedian(arr1, n, arr2, m);
        System.out.println(median);
	}
}
