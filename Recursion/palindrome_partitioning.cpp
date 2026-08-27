// Problem: Palindrome Partitioning

// Approach: Backtracking

// Time Complexity: O(N * 2^N)

// Space Complexity: O(N)

class Solution {
public:
    bool is_pallindrome(string str){
        int left = 0;
        int right = str.length() - 1;

        while(left <= right){
            
            if(str[left] != str[right]){
                return false;
            }
            left++ ;
            right--;
        }

        return true;

    }

    void solve(string s, vector<string> &temp, vector<vector<string>> &ans, int index){
        string str = "";

        if(index == s.length()){
            ans.push_back(temp);
            return;
        }

        for(int i=index; i<s.length(); i++){
            str += s[i];
            
            if(is_pallindrome(str)){
                temp.push_back(str);       // take

                solve(s, temp, ans, i+1);  // solve

                temp.pop_back();           // undo

            }
        }

    }