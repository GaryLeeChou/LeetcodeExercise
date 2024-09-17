class Solution {
public:
    bool isPalindrome(int x) {
        bool ret = false;
        string num_end = to_string(x);
        string num_first = to_string(x);
        int len = num_end.size();
        for( int i = 0 ; i < len/2 ; i++ ){
            char temp = num_end[i];
            num_end[i] = num_end[len - i - 1];
            num_end[len - i - 1] = temp;
        }
        if (num_end == num_first){
            ret = true;
        }
        return ret;
    }
};