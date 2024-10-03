class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ret = "";
        char abcd[26] = {'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
        while (columnNumber != 0){
            ret = abcd[(columnNumber % 26)] + ret;
            columnNumber = (columnNumber % 26 == 0)? (columnNumber / 26) - 1 : columnNumber / 26;
        }
        return ret;
    }
};