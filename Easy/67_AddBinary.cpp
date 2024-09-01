class Solution {
public:
    int oneorzero(char str) {
        if ( str == '1'){
            return 1;
        } else{
            return 0;
        }
    }
    string addBinary(string a, string b) {
        if (b.size() > a.size()){
            string c = a;
            a = b;
            b = c;
        }
        int a_[a.size()];
        int b_[b.size()];
        int leng = a.size();
        
        for ( int i = 0 ; i < a.size() ; i ++){
            a_[i] = oneorzero(a[a.size() - i - 1]);
        }
        for ( int i = 0 ; i < b.size() ; i ++){
            b_[i] = oneorzero(b[b.size() - i - 1]);
        }

        
        int two = 0;
        string ret = "";
        for( int j = 0 ; j < leng ; j++){
            int k;
            if (j > b.size() - 1){
                k = 0;
            }else{
                k = b_[j];
            }
            if (a_[j] + k + two == 3){
                ret = "1" + ret;
                two = 1;
            }else if (a_[j] + k + two == 2){
                ret = "0" + ret;
                two = 1;
            }else if (a_[j] + k + two == 1){
                ret = "1" + ret;
                two = 0;
            }else if (a_[j] + k + two == 0){
                ret = "0" + ret;
                two = 0;
            }
        }
        if (two == 1){
            ret = "1" + ret;
        }
        return ret;
    }
};