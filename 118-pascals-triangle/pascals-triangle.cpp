class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows == 1) 
            return res;
        res.push_back({1,1});
        if(numRows == 2) 
            return res;
        
        for(int i=3; i<=numRows; i++){
            vector<int> curr(i, 1);                        
            for(int j=1; j<i-1; j++)
                curr[j] = res[i-2][j-1] + res[i-2][j];
            res.push_back(curr);
        }
        return res;
    }
};