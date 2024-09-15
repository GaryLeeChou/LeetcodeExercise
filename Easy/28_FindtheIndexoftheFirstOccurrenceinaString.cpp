class Solution {
public:
    int strStr(string haystack, string needle) {
        int ret;
        bool check = false;
        int j = 0;
        for( int i = 0 ; i < haystack.size() ; i++ ){
            if (check == false && haystack[i] == needle[j]){
                ret = i;
                j++;
                check = true;
            }else if(check == true){
                if (haystack[i] != needle[j]){
                    i = i - j ;
                    j = 0 ;
                    check = false;
                }else{
                    j++;
                }
            }
            if (j == needle.size()){
                return ret;
            }
        }
        ret = -1;
        return ret;
    }
};