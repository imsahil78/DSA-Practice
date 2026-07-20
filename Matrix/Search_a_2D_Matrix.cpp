// Problem: Search a 2D Matrix
// Approach: Binary Search on rows to find the correct row, then Binary Search in that row.
// Time Complexity: O(log m + log n)
// Space Complexity: O(1)


class Solution {
public:
    // row found now to search element in in row apply binary search on row 
    bool search_row(vector<vector<int>>& matrix, int target, int mid_row)
    {
      int n = matrix[0].size();
      int start = 0;
      int end = n - 1;

      while(start <= end)
    {
        int mid = start + (end - start)/2 ;

        if(matrix[mid_row][mid] == target){
            return true;
        }
        else if(target > matrix[mid_row][mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
      } return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() , n = matrix[0].size() ;
        int start = 0 , end = m - 1;

        while(start <= end)
        {
            int mid_row = start + (end - start)/2 ;

            if(target >= matrix[mid_row][0] && target <= matrix[mid_row][n-1]) 
            {
                return search_row(matrix, target, mid_row) ; // if mid ROW found
            }
            else if(target < matrix[mid_row][0])
            {
                end = mid_row - 1;  
            }
            else
            {

             start = mid_row + 1;
            }
        } return false;
    }
};