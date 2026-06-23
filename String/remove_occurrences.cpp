// Problem: Remove All Occurrences of a Substring
// Approach: Repeatedly find the first occurrence of 'part' and erase it until no occurrence remains.
// Time Complexity: O(n * m * k)
// Space Complexity: O(1) 


class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(true)
        {
           int a = s.find(part) ;

            if(a < s.length())
            {

            s = s.erase(a, part.length()) ;

            }

            else
            {
                return s ;
            }
        }



    }
};