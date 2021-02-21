#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int first1(vector<int> arr, int low, int high)
    {
        if (high >= low)
        {
            int mid = (high - low) / 2;
            if ((mid == 0 || arr[mid - 1] == 0) && arr[mid] == 1)
            {
                return mid;
            }
            else if (arr[mid] == 0)
            {
                // traverse to right of array
                return first1(arr, mid + 1, high);
            }
            else
            {
                // traverse to left of array
                return first1(arr, low, mid - 1);
            }
        }
        return -1;
    }

    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {
        int row = -1;

        int j = m - 1;
        // optimising brute force approach
        // time compexity :- O(n+m)
        for (int i = 0; i < n; i++)
        {
            while (j >= 0 && arr[i][j] == 1)
            {
                j--;
                row = i;
            }
        }
        return row;

        // simple brute force solution
	   // time complexity :- O(n*m)
	   // for(int i=0; i<n; i++){
	   //     for(int j=0; j<m; j++){
	   //         if(arr[i][j] == 1){
	   //             count++;
	   //         }
	   //     }
	   //     if(count > maxCount){
	   //         maxCount = count;
	   //         row = i;
	   //     }
	   // }
	   // return row;
	   
	   
	   // time complexity :- average case = O(n+m)
	   //                    worst case = O(n*m)
	   //for(int j=0; j<m; j++){
	   //    for(int i=0; i<n; i++){
	   //        if(arr[i][j] == 1){
	   //            row = i;
	   //            return row;
	   //        }
	   //    }
	   //}
	   //return row;
	   
	   // Using Binary Search
	   // time complexity :- O(nlogm)
        //     for(int i=0; i<n; i++){
        // 	   int index = first1(arr[i], 0, m-1);
        	       
        // 	   if(index != 1 && m-index > maxCount){
        // 	        row = i;
        // 	        maxCount = m - index;
        // 	   }
        // 	 }
        //  return row;
        
        // optimising brute force approach
		// int j = first1(arr[0], 0, m-1);
            
            // if(j == -1){
            //     j = m-1;
            // }
            
            // for(int i=1; i<n; i++){
            //     while(j>=0 && arr[i][j]==1){
            //         j--;
            //         row = i;
            //     }
            // }
            // return row;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}