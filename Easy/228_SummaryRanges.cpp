class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> str;
        str.reserve(nums.size());
        int str_num = 0;
        int cont_num = 0;
        bool cont = false;
        for(int i = 0 ; i < nums.size() ; i++){
            if ( cont == false ){
                cont_num = 1;
                cont = true;
            }else if( cont = true && nums[i - 1] == nums[i] - 1){
                cont_num ++;
            }else{
                if( cont_num == 1 ){
                    str.push_back(to_string(nums[ i - 1 ]));
                    i -- ;
                }else{
                    string temp = to_string(nums[ i - cont_num ]) + "->" + to_string(nums[ i - 1 ]);
                    str.push_back(temp);
                    i -- ;
                    cont_num = 1;
                }
                if ( i == nums.size() - 2){
                    cont = true;
                    i++;
                } else{
                    cont = false;
                }
            }
            if ( i == nums.size() - 1){
                if( cont_num == 1 ){
                    str.push_back(to_string(nums[ i ]));
                }else{
                    string temp = to_string(nums[ i - cont_num + 1]) + "->" + to_string(nums[ i ]);
                    str.push_back(temp);
                    cont_num = 1;
                }
            }
        }
        return str;
    }
};