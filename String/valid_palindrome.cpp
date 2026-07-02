
/*
Problem: Valid Palindrome
Approach: Two Pointers
Time: O(n)
Space: O(1)
*/

class Solution {
public:

     bool isAlphanumeric(char ch)
        {
            if((ch >= '0' && ch <= '9') || (ch>= 'a' && ch <= 'z')) return true;
            else return false;
        } 

    bool isPalindrome(string s) {

        int start = 0;
        int end = s.length() - 1;

        while( start<end )
        {
            if(!isAlphanumeric(tolower(s[start]))) 
            {
                start++ ;
                continue;
            }

            if(!isAlphanumeric(tolower(s[end]))) 
            {
                end -- ;
                continue;
            }

            if(tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }

            start ++  ;
            end -- ;

        } return true ;

    }
};