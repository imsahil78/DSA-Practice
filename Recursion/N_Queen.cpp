// Problem: N-Queens
// Approach: Backtracking
// Time Complexity: O(N!)
// Space Complexity: O(N²)

class Solution {
public:
    bool is_Safe(int row, int column, int n, vector<string> &temp){

        for(int i=row-1; i>=0; i--){
            if(temp[i][column] == 'Q'){   // check above column if other queen exist
                return false;
            }
        }

        for(int i=row, j=column; i>=0 && j>=0; i--,j--){
            if(temp[i][j] == 'Q'){  // check left diagonal
                return false;
            }
        }

        for(int i=row, j=column; i>=0 && j<n; i--,j++){
            if(temp[i][j] == 'Q'){  // check right diagonal
                return false;
            }
        }

        return true;
    }
    void n_queen(vector<vector<string>> &ans,  vector<string> &temp, int n, int row)
    {
        if(row == n){
            ans.push_back(temp);  // base case
            return;
            
        }

        for(int j=0; j<n; j++){
            
            if(is_Safe(row, j, n, temp)){
                temp[row][j] = 'Q';              // place queen at first row
                n_queen(ans, temp, n, row+1);    // call nxt row
                temp[row][j] = '.';              // if no place found then undo 'Q'='.'

            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; // store ans
        vector<string> temp(n, string(n, '.')); // chess board 4*4 with ....
                                                                  //    ....
        n_queen(ans, temp, n, 0);
        return ans;
    }
};