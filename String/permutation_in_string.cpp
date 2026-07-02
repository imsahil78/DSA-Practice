// Problem: Permutation in String
// Approach: Store the frequency of s1, check every window of the same size in s2, and compare the frequency arrays.
// Time Complexity: O(n * m)
// Space Complexity: O(1)



class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[])
    {
        for(int i=0; i<26; i++)
        {
            if(freq1[i] != freq2[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        
        int freq[26] = {0};

        for(int i=0; i<s1.length(); i++){
            int index = s1[i] - 'a' ;
            freq[index]++ ;
        }

        int windowsize = s1.length();

        for(int i = 0; i + windowsize <= s2.length(); i++){
            int idx = i ;
            int windowindex = 0;
            int windowfreq[26] = {0};

            while(windowindex < windowsize && idx < s2.length()){
                int index = s2[idx] - 'a' ;
                windowfreq[index]++ ;
                idx++; windowindex++ ;
            }

            if(isFreqSame(freq, windowfreq))
            {
                return true;
            } 
            
        }  return false;

    }
};