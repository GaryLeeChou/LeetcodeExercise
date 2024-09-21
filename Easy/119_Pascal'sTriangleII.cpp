class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ret = {{1}};
        ret.reserve(rowIndex + 1);
        for(int i = 2 ; i < rowIndex + 2 ; i++){
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
        return ret[ rowIndex ];
    }
};