// Problem: Sudoku Solver
// Approach: Backtracking
// Time Complexity: O(9^81)
// Space Complexity: O(81) = O(1)

class Solution {
public:
    bool is_safe(vector<vector<char>>& board, int row, int column, int digit){
        
        //check column
        for(int i=0; i<9; i++){
            if(board[i][column] == digit){
                return false;
            }
        }

        // check row
        for(int j=0; j<9; j++){
            if(board[row][j] == digit){
                return false;
            }
        }

        //check grid
        int start_row = (row / 3) * 3;
        int start_column = (column / 3) * 3;

        for(int i = start_row; i<start_row+3; i++){
            for(int j=start_column; j<start_column+3; j++){
                
                if(board[i][j] == digit){
                    return false;
                }
            }
        } return true;

    }
    bool help_solve(vector<vector<char>>& board, int row, int column){
        // check row
        if(row == 9){
            return true;
        }

        // find next row and column
        int next_row = row;
        int next_column = column + 1;

        if(next_column == 9){
            next_row = row + 1; // 0th now finished take nxt row now 1....
            next_column = 0; // make column again 0
        }
        
        // if number already exist return becuase dont try to put number
        if(board[row][column] != '.'){
            return help_solve(board, next_row, next_column);
        }

        // if its blank then put number
        for(char digit = '1'; digit<='9'; digit++){
            if(is_safe(board, row, column, digit)){
                board[row][column] = digit;
                
                // if no element found then it will not run
                if(help_solve(board, next_row, next_column)){ // return false if no element found
                    return true;
                }

                board[row][column] = '.'; // undo
            }
        } return false;
        

    }

    void solveSudoku(vector<vector<char>>& board) {
        help_solve(board, 0, 0);
    }
};