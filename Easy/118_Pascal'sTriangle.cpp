class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret = {{1}};
        ret.reserve(numRows);
        for(int i = 2 ; i < numRows + 1 ; i++){
            vector<int> temp;
            temp.reserve(i);
            for( int j = 0 ; j < i ; j++){
                if (j == 0 || j == i - 1){
                    temp.push_back(1);
                }else{
                    temp.push_back(ret[i - 2][j - 1] + ret[i - 2][j]);
                }
            }
            ret.push_back(temp);
        }
        return ret;
    }
};