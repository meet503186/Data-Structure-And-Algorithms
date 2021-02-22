#include <bits/stdc++.h>
using namespace std;

void commonElements(vector<vector<int> > matrix, int n, int m){
        unordered_map<int,int> map;
        
        // Initialize the first row elements with value 1
        for(int j=0; j<m; j++){
            map[matrix[0][j]] = 1;
        }
        
        // traverse the matrix except first row 
        for(int i=1; i<n; i++){
            for (int j=0; j<m; j++){
                
                // if element is present in the map and is not duplicated in the current row
                if(map[matrix[i][j]] == i){
                    map[matrix[i][j]] = i+1;
                    
                    // if this is last row
                    if(i==n-1){
                        cout<<matrix[i][j]<<" ";
                    }
                }
            } 
        }
    }

int main() {
	int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m,0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

   commonElements(matrix, n, m); 
   return 0;
}