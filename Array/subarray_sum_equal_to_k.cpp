// LeetCode 560. Subarray Sum Equals K
// Approach: Prefix Sum + Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prf_sum(n, 0); // store prefix sum
        prf_sum[0] = nums[0]; // i - 1 constraint
        int count = 0; // no of time subarray exist

        for(int i=1; i<n; i++)
        {
            prf_sum[i] = prf_sum[i - 1] + nums[i]; // prev + current sum
        }

        unordered_map<int, int> m; // store prefix sum and fre(count)
        
        for(int j=0; j<n; j++)
        {
            if(prf_sum[j] == k) count++ ;

            int val = prf_sum[j] - k;

            if(m.find(val) != m.end()){
                count += m[val];  // m[val] mai val = key 
            }
            
            m[prf_sum[j]]++ ; // insert value 
        }return count;
    }
};