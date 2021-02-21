#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int minr = 0;
        int minc = 0;
        int maxr = r-1;
        int maxc = c-1;
        int total = r*c;
        int i,j,count=0;
        
        vector<int> vec;
        while(count < total) {
			
			// top wall
			for(i=minr,j=minc; j<=maxc && count < total; j++) {
				vec.push_back(matrix[i][j]);
				count++;
			}
			minr++;
			
			// right wall
			for(i=minr,j=maxc; i<=maxr && count < total; i++) {
				vec.push_back(matrix[i][j]);
				count++;
			}
			maxc--;
			
			// bottom wall
			for(i=maxr,j=maxc; j>=minc && count < total; j--) {
				vec.push_back(matrix[i][j]);
				count++;
			}
			maxr--;
			
			// left wall
			for(i=maxr,j=minc; i>=minr && count <total; i--) {
				vec.push_back(matrix[i][j]);
				count++;
			}
			minc++;
		}
		return vec;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}