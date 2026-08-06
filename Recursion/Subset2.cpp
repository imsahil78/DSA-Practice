// Problem: Subsets II (LeetCode 90)
// Approach: Include / Exclude Recursion with Duplicate Skipping
// Time Complexity: O(n log n + 2^n)
// Space Complexity: O(n + 2^n * n)

class Solution {
public:
    void getAllSubset(vector<int>& nums, vector<vector<int>> &ans, vector<int> &temp, int i ){
        int n = nums.size();

        if(i == n){
            ans.push_back(temp) ;
            return;
        }


        temp.push_back(nums[i]);
        getAllSubset(nums, ans, temp, i+1);  // include
        temp.pop_back();
        int index = i + 1;

        while(index < n && nums[index] == nums[index-1]) // skip duplicate
        {
            index++;

        }

        getAllSubset(nums, ans, temp, index ) ; // exclude

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        vector<vector<int>> ans; // stores actual ans
        vector<int> temp; // stores ans of stack
        int i = 0;
        getAllSubset(nums,ans, temp, i ) ;

        return ans;

    }
};