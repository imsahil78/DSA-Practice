// Problem: Trapping Rainwater
// Approach: Prefix Array
// Time Complexity: O(N)
// Space Complexity: O(N)

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> right_max(n, 0);
        vector<int> left_max(n, 0);
        int ans = 0;

        int left = INT_MIN;
        int right = INT_MIN;

        for(int i=0; i<n; i++) {
            left = max(left, height[i]);
            left_max[i] = left;
        }
       
        for(int i=n-1; i>=0; i--) {
            right = max(right, height[i]);
            right_max[i] = right;
        }

        for(int i=0; i<n; i++) {
            ans+= min(right_max[i], left_max[i]) - height[i];
        }
        return ans;
    }
};