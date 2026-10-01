/*
 * Problem: Sliding Window Maximum
 * Time Complexity: O(n)
 * Space Complexity: O(k)
 */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> q;
        vector<int> ans;

        //store 1st window
        for(int i=0; i<k; i++) {
            while(!q.empty() && nums[q.back()] <= nums[i]) {
                q.pop_back();
            }
            q.push_back(i);   // smaller index at last because we have check in while loop if no is greter it will come in front
        }

        //remaining windows
        for(int i=k; i<nums.size(); i++) {
            ans.push_back(nums[q.front()]);

            while(!q.empty() && q.front() <= i-k) {
                q.pop_front();
            }

            while(!q.empty() && nums[q.back()] <= nums[i]) {
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(nums[q.front()]);  //last remaining element left because in second window we store max sum of first window
        return ans;
    } 
};