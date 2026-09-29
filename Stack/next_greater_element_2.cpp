// Problem: Next Greater Element II
// Approach: Monotonic Stack
// Time Complexity: O(N)
// Space Complexity: O(N)

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        vector<int> ans(nums.size(), 0);
        int n = nums.size();

        for(int i=n*2 - 1; i>=0; i--) {
            while(s.size() != 0 && nums[s.top()] <= nums[i % n]) {
                s.pop();
            }
            if(s.size() == 0) {
                ans[i % n] = -1;
            }
            else {
                ans[i % n] = nums[s.top()];
            }
            s.push(i % n);
        } return ans;

    }
};