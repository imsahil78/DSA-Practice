// Problem: Valid Parentheses

// Approach: Stack

// Time Complexity: O(N)

// Space Complexity: O(N)


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.size(); i++) {
            char ch = s[i];
    
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
             else{
                if(st.empty()) return false;   // error when 1st char closing ')' st.top() not exist
                if(ch == ')' && st.top() != '(') return false;
                if(ch == ']' && st.top() != '[') return false;
                if(ch == '}' && st.top() != '{') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};