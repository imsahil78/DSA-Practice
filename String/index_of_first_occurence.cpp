// Problem: Find the Index of the First Occurrence in a String
// Approach: Use the built-in find() function to search for the substring.
// Time Complexity: O(n * m) (worst case)
// Space Complexity: O(1)



class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;

        index = haystack.find(needle) ;

        if(index == -1) return -1 ;
        else return index ;

    }
};