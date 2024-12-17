class Solution {
public:
    int addDigits(int num) {
        int ret;
        if (num == 0){
            return 0;
        }
        do
        {
            ret = 0;
            while (num > 0){
                ret += num % 10;
                num = num / 10;
            }
            num = ret;
        }while(ret >= 10);
        return ret;
    }
};