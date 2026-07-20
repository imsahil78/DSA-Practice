// LeetCode 287. Find the Duplicate Number
// Approach: Floyd's Tortoise and Hare (Cycle Detection)
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        while(slow != fast);
            slow = nums[0];

            while(slow != fast){
                slow = nums[slow];
                fast = nums[fast];
            } return slow;
    }
};