// Approach: Next Permutation Algorithm
// Time Complexity: O(n log n)
// Space Complexity: O(1)


class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int pivot = -1 ;
        int n = nums.size();

        // Find pivot
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot = i;
                break;
            }
        }
         // If pivot not found sort it and return
        if(pivot == -1)
        {
            sort(nums.begin(), nums.end()) ;
            return;
        }

        // Find next greater element to swap(2-3, 4-5)
        for(int i=n-1; i>pivot; i--)
        {
            if(nums[pivot] < nums[i])
            {
                swap(nums[pivot], nums[i]) ;
                break;
            }
        }

        int start = pivot+1;
        int end = n - 1;

       // reverse the elemnt after pivot
        while(start<end)
        {
            swap(nums[start], nums[end]) ;
            start++;
            end--;
        }



        
    }
};