class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ret = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(ret != nums[i]){
                return ret;
            }
            ret++;
        }
        return ret;
    }
};