class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ret = 0;
        map<char,int> abc{
            {'A',1},
            {'B',2},
            {'C',3},
            {'D',4},
            {'E',5},
            {'F',6},
            {'G',7},
            {'H',8},
            {'I',9},
            {'J',10},
            {'K',11},
            {'L',12},
            {'M',13},
            {'N',14},
            {'O',15},
            {'P',16},
            {'Q',17},
            {'R',18},
            {'S',19},
            {'T',20},
            {'U',21},
            {'V',22},
            {'W',23},
            {'X',24},
            {'Y',25},
            {'Z',26},
        };
        
        for(int i = 0 ; i < columnTitle.size() ; i++){
            char temp = columnTitle[columnTitle.size() - i - 1];
            ret = ret + abc[temp] * pow(26,i) ; 
        }
        return ret;
    }
};