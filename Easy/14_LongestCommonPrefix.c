class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for( int i = 0 ; i < strs.size(); i ++){
            cout<<ans<<endl;
            string ans_ = "";
            for (int j = 0 ; j < ans.size(); j ++){
                if(strs[i][j] == ans[j]){
                    cout<<ans_<<endl;
                    ans_ += ans[j];
                    continue;
                }else{
                    break;
                }
            }
            ans = ans_ ;
        }
        return ans;
    }
};