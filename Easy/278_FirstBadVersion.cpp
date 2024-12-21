// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ret = 0;
        unsigned int right = n;
        unsigned int left = 0;
        while (right != left + 1){
            unsigned int num = (right+left)/2;
            if(isBadVersion(num) == 0){
                left = num;
            }else{
                right = num;
            }
        }
        ret = right;
        return ret;
    }
};