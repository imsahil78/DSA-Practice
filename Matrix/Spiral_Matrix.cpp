// Problem: Spiral Matrix
// Approach: Boundary Traversal
// Time: O(m * n)
// Space: O(1)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int start_row = 0;
        int start_column = 0;
        int end_row = m - 1;
        int end_column = n - 1;
        vector<int> vec;

        while(start_row <= end_row && start_column <= end_column){
            //top
            for(int j = start_column; j<=end_column; j++){
                vec.push_back(matrix[start_row][j]);
            }

            //right column
            for(int i = start_row+1; i<=end_row; i++){
                vec.push_back(matrix[i][end_column]);
            }

            // bottom row
            for(int j = end_column-1; j>=start_column; j--){
                if(start_row == end_row){
                    break;
                }
                vec.push_back(matrix[end_row][j]);
            }

            // left column
            for(int i = end_row-1; i>start_row; i--){
                if(start_column == end_column){
                    break;
                }
                vec.push_back(matrix[i][start_column]) ;
            }

            start_column++; start_row++; end_row--; end_column--;

        
        } return vec;

    }
};