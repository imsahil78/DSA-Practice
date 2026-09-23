// Problem: Largest Rectangle in Histogram
// Approach: Monotonic Stack
// Time Complexity: O(N)
// Space Complexity: O(N)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> r; // calculate lowest right side value for element
        vector<int> right(heights.size(), 0); // store lowest value index
        
        stack<int> l; // calculate lowest left side value for element
        vector<int> left; // store lowest value index

        //right side
        for(int i=heights.size() - 1; i>=0; i--) {
            while(r.size() !=0 && heights[r.top()] >= heights[i]) {
                r.pop();
            }
            if(r.empty()) {
                right[i] = heights.size();
            }
            else {
                right[i] = r.top() ;
            }
            r.push(i);
        }

          //left side
        for(int i=0; i<heights.size(); i++) {
            while(l.size() !=0 && heights[l.top()] >= heights[i]) {
                l.pop();
            }
            if(l.empty()) {
                left.push_back(-1);
            }
            else {
                left.push_back(l.top());
            }
            l.push(i);
        }
        int ans = 0;
        for(int i=0; i<heights.size(); i++) {
            int width = right[i] - left[i] - 1;
            int curr_area = heights[i] * width;
            ans = max(ans, curr_area);
        } return ans;
    }
};