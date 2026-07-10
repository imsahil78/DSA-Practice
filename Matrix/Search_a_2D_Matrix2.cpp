// Problem: Search a 2D Matrix II
// Approach: Start from the top-right corner. If the current element
//           is greater than the target, move left; otherwise move down.
//           This eliminates one row or one column in every step.
// Time Complexity: O(m + n)
// Space Complexity: O(1)


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = m - 1;
        int column = 0;

        while (row >= 0 && column < n) {
            if (matrix[row][column] == target)
                return true;

            if (target < matrix[row][column])
                row--;
            else
                column++;
        }

        return false;
    }
};