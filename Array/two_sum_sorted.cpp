  // leetcode 167. Two Sum II - Input Array Is Sorted
  //  Time Complexity: O(n)
  //  Space Complexity: O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        for(int i=0; i<nums.size(); i++){

            if(nums[start] + nums[end] == target){
                return{start+1, end+1} ;
            }

            if(nums[start] + nums[end] < target){
                start++ ;
            }

            else{
                end-- ;
            }
        }return{};
    }
};