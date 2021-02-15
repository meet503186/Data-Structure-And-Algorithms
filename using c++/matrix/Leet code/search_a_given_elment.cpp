class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool find = false;
        if(matrix.empty() == true){
            return false;
        }
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] == target){
                    find = true;
                    break;
                }
                }
            if(find == true){
                break;
            }
        }
        return find;
    }
    
};