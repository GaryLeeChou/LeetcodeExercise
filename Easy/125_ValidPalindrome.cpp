class Solution {
public:
    bool isPalindrome(string s) {
        bool ret = true;
        string trim = "";
        string reserve = "";
        for(int i = 0 ; i < s.size() ; i ++){
            // cout<<s[i]<<endl;
            if (!isdigit(s[i]) && !isalpha(s[i])){
                s.erase (s.begin() + i);
                i--;
            }
        }
        cout<<s<<endl;
        for( int j = 0 ; j < s.size() / 2 ; j ++){
            if ((char)tolower(s[j]) != (char)tolower(s[s.size() - j - 1])){
                return false;
            }
        }
        return ret;
    }
};