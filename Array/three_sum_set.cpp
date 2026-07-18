class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> unique; // unique triplet store;

        for(int i=0; i<nums.size(); i++)
        {   int first = - nums[i]; // stores first variable in "-ve"
            set<int> s;  // store the vector so that we can check target

            for(int j = i+1; j<nums.size(); j++ ){
                int second = nums[j] ;
                int third = first - second;

                if(s.find(third) != s.end()){
                    vector<int> vec = {nums[i], second, third};
                     // first num is nums[i] not -nums[i]
                    sort(vec.begin(), vec.end());
                    unique.insert(vec);
                    
                }
                s.insert(second);
            }
        }
        
        vector<vector<int>> ans(unique.begin(), unique.end());
        return ans;
    }
};