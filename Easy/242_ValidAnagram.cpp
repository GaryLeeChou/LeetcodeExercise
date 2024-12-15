class Solution {
public:
    vector<string> check(string a , char char_){
        string ret_ = "";
        vector<string> ret ;
        int num = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if (a[i] == char_){
                num++;
            }else{
                ret_ += a[i];
            }
        }
        ret.push_back(ret_);
        ret.push_back(to_string(num));
        return ret;
    }
    bool isAnagram(string s, string t) {
        bool ret = true;
        int j = 0;
        int num;
        if (s.size() != t.size()){
            return false;
        }

        while (s != ""){
            vector<string>s_  = check(s,s[0]);
            vector<string>t_  = check(t,s[0]);
            if (s_[1] != t_[1]){
                return false;
            }
            s = s_[0];
            t = t_[0];
        }
        return ret;
    }
};