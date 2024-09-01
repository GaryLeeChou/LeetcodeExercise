class Solution {
public:
    int lengthOfLastWord(string s) {
        int num = 0;
        bool unspace = false;
        string str = "";
        vector<string> str_list;
        for(int i = 0 ; i < s.size() ; i++){
            if (s[i] == ' ' & unspace == false){
                continue;
            }
            if(s[i] == ' '){
                unspace = false;
                cout<<str<<endl;
                str_list.push_back(str);
                cout<<str_list[str_list.size() - 1].size()<<endl;
                num = str_list[str_list.size() - 1].size();
                str = "";
            }else if(i == s.size() - 1 && s[i] != ' '){
                str = str + s[i];
                cout<<str<<endl;
                str_list.push_back(str);
                cout<<str_list[str_list.size() - 1].size()<<endl;
                num = str_list[str_list.size() - 1].size();
            }else{
                unspace = true;
                str = str + s[i];
            }
            
        }
        return num;
    }
};