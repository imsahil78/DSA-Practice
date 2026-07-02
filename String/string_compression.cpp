// Problem: String Compression
// Approach: Traverse the character array, count consecutive occurrences of each character,
// write the character once, and if its count is greater than 1, append the count as digits.
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;

        for(int i=0; i<chars.size(); i++){
            char ch = chars[i] ; // current char
            int count = 0 ; // char count
            string str = " " ;

                while(i < chars.size() && ch == chars[i]){
                    count++ ;
                    i++ ;
                } i--;  

                if(count == 1) chars[index++] = ch ;
                else{
                    chars[index++] = ch;
                    str = to_string(count) ; // convert int to string

                    for(char c : str){
                        chars[index++] = c ;
                    }
                }
        } return index ;
    }
};