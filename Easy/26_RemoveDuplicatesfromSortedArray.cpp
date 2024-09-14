class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 0;
        int num = 101;
        for(int i = 0 ; i < nums.size() ; i++){
            if (nums[i] != num){
                nums[ret] = nums[i];
                ret++;
                num = nums[i];
            }
        }
        return ret;
    }
};