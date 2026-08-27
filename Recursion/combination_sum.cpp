// Problem: Combination Sum

// Approach: Backtracking

// Time Complexity: O(2^T) approximately

// Space Complexity: O(T)

class Solution {
public:
    void solve(vector<int>& candidates, int target, vector<vector<int>> &ans,vector<int> &temp, int index){
        sort(candidates.begin(), candidates.end());
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        for(int i=index; i<candidates.size(); i++){
            if(target < candidates[i]){ // if 2 2 2 2 candidate[i] = 2 its > 1=target
                break;
            }
            temp.push_back(candidates[i]);
            
            // Pass i because the same number can be used again
            // Passing i also skips numbers before the current index
            solve(candidates, target-candidates[i], ans, temp, i);
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index;  // skip duplicate

        solve(candidates, target, ans, temp, 0);
        return ans;
    }
};