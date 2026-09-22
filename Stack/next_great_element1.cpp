// Problem: Next Greater Element I
// Approach: Stack + Hash Map
// Time Complexity: O(N + M)
// Space Complexity: O(N + M)

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> m;
        vector<int> v;

        for(int i=nums2.size() -1; i>=0; i--) {

            while(s.size() != 0 && s.top()<= nums2[i]) {
                s.pop();
            }
            if(s.empty()) {
                v.push_back(-1);
                m[nums2[i]] = -1;
            }
            else {
                v.push_back(s.top());
                m[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }

        vector<int> ans;

        for(int i=0; i<nums1.size(); i++) {
            ans.push_back(m[nums1[i]]);
        } 
        return ans;
    }
};