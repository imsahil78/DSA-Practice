// Problem: Reverse Words in a String
// Approach: Reverse the entire string, extract each reversed word, reverse it back, and append it to the answer.
// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    string reverseWords(string s) {
        string ans = "" ;
        reverse(s.begin(), s.end()) ;

        for(int i=0; i<s.length(); i++){
            string word = "" ;

            while(i < s.length() && s[i] != ' '){
                word += s[i] ; // stores the rev words
                i++ ;
            }

            reverse(word.begin(), word.end()) ;
            if(word.length() > 0){
                ans += " " + word ;
            }


        } return ans.substr(1) ;
    }
};