class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int half_pos = nums.size()/2;
        int pos = nums.size()/2;

        if(nums[0] >= target){
            return 0;
        }else if(nums[nums.size() - 1] < target){
            return nums.size();
        }
        
        do{
            cout<<"half_pos == "<< half_pos <<endl;
            cout<<"pos == "<< pos <<endl;
            if (half_pos % 2){
                half_pos++;
            }
            if (half_pos > 1){
                half_pos = half_pos / 2;
            }
            if( nums[pos] < target ){
                pos = pos + half_pos; 
                cout<<"newpos == "<< pos <<endl;
            }else if( nums[pos] == target ){
                cout<<"newpos == "<< pos <<endl;
                return pos;
            }else{
                pos = pos - half_pos;
                cout<<"newpos == "<< pos <<endl;
            }
        }while(half_pos > 1);
        if((nums.size() == 2 or nums.size() == 3)&& pos == 0 && nums[0] < target){
            pos = 1;
        }else if(nums[pos] < target){
            pos ++;
        }
        return pos;
    }
}; 