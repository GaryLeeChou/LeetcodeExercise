class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2){
            return n;
        }
        n = n - 2;
        int ans = 1;
        int num1 = 1;
        int num2 = 2;
        for( int i = 0 ; i < n ; i++ ){
            ans = num1 + num2;
            if(i%2 ==0){
                num1 = ans;
            }else{
                num2 = ans;
            }
        }
        return ans;
    }
};