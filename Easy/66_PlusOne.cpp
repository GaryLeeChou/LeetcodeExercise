class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool ten = false;
        for( int i = digits.size() - 1 ; i >= 0 ; i--){
            if (i == digits.size() - 1 or ten == true){
                digits[i]++;
                if (digits[i] == 10){
                    digits[i] = 0;
                    ten = true;
                }else{
                    ten = false;
                }
            }
        }
        if (ten == true){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};