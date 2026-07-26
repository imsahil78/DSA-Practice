// Problem: Print All Subsets
// Time Complexity: O(n * 2^n)
// Space Complexity: O(n * 2^n)

class Solution {
public:
    void getAllSubset(vector<int>& nums, vector<int> temp, int i, vector<vector<int>> &ans){

        if(i == nums.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]); // push the initial value

        getAllSubset(nums,temp, i+1 ,ans) ;

        temp.pop_back(); // pop the value 1,2,3 = 1, 2

        getAllSubset(nums,temp, i+1, ans) ;

    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; // store all ans
        vector<int> temp; // store temprory value
        int i = 0; // i is the index of the array
        getAllSubset(nums, temp, i, ans);

        return ans;

    }
};


