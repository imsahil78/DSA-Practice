// LeetCode 15. 3Sum
// Approach: Sorting + Two Pointers
// Time Complexity: O(n²)
// Space Complexity: O(1)

class Solution {

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            int j = i + 1; // second num
            int k = n - 1; // third num
     
            if(i > 0 && nums[i] == nums[i-1]){  // if i is same after increment
                continue;
            }

            while(j < k){
                int target = nums[i] + nums[j] + nums[k] ;

                if(target < 0){
                    j++ ;
                }
                
                else if(target > 0){
                    k-- ;
                }
                
                else{
                    ans.push_back({nums[i], nums[j], nums[k]}) ;
                    j++ ;
                    k-- ;

                    // if j and k value same after change they will give same ans
                    while(j < k && nums[j] == nums[j-1]){ // check j<k because this while loop dont check if j < k so check it
                        j++ ;
                    }

                    
                    while(j < k && nums[k] == nums[k+1]){
                        k-- ;
                    }
                }
            } 
        } return ans ;
    }
};