class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret = 0;
        int total = prices.size();
        int buy = 10000;
        int sell = 0;
        for(int i = 0 ; i < total ; i ++){
            if ( prices[i] < buy){
                buy = prices[i];
                sell = 0;
            }else{
                sell = prices[i];
                if ( sell - buy > ret ){
                    ret = sell - buy;
                }
            }
        }      
        return ret;
    }
};