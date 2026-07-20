class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_map<int, int> freq;

        for(auto &x : grid){    // contain val x = [1,2,3] , [4, 5, 6]
            for(auto val : x){  // contain val = 1 , 2, 3....
                freq[val]++ ;
            }
        }

        int missing = -1;
        int repeating = -1;
        int n = grid.size();

        for(int i=1; i<=n*n; i++)
        {   
            if(freq[i] == 0){
                missing = i;
            }
            if(freq[i] == 2){
                repeating = i;
            }
        }return{repeating, missing} ;  
    }
};