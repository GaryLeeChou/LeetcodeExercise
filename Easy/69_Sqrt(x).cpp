class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int left = 0;
        int right = x;
        long i = right;
        while(1){
            if ( i * i > x){
                right = i;
            }else if( i * i < x){
                left = i;
            }else{
                return i;
            }
            
            if (right - left == 1){
                return left;
            }else{
                i = left + (right - left)/2;
            }
        }
    }
};