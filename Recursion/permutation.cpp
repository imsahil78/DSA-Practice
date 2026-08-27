// Problem: LeetCode 46 - Permutations
// Approach: Backtracking (Swap)
// Time Complexity: O(n × n!)

// Logic:
// index = current position (chair)
// i = element/person to try at this position
// After fixing one element at the current position,
// recursively fill the next position (index + 1).

class Solution {
public:

    void getallpermutation(vector<int>& nums, vector<vector<int>>& ans, int index )
    {   int n = nums.size();
        vector<int> temp;
        if(index == n)
        {
            ans.push_back(nums);
        }

        for(int i=index; i<n; i++){     // i = 123 and index means chair c1, c2, c3
            swap(nums[index], nums[i]); 
            getallpermutation(nums,ans, index + 1 );
            swap(nums[index], nums[i]);
 
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0; // position 0, 1, 2
        vector<vector<int>> ans; // to store ans
         getallpermutation(nums,ans, 0 );
         return ans;
        
    }
};