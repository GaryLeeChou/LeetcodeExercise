class Solution {
public:
    bool isValid(string s) {
        bool ans = true;
        string sTr = "";
        for(int i = 0 ; i < s.size(); i ++){
            cout<<s[i]<<endl;
            string::iterator it = sTr.end();  
            if(s[i] == '('){
                sTr.push_back('a');
            }else if(s[i] == ')' && *(it-1) == 'a'){
                sTr.erase(sTr.end() - 1);
            }else if(s[i] == '['){
                sTr.push_back('b');
            }else if(s[i] == ']' && *(it-1) == 'b'){
                sTr.erase(sTr.end() - 1);
            }else if(s[i] == '{'){
                sTr.push_back('c');
            }else if(s[i] == '}' && *(it-1) == 'c'){
                sTr.erase(sTr.end() - 1);
            }else{
                ans = false;
                break;
            }
        }
        if (sTr != ""){
            ans = false;
        }
        return ans;
    }
};