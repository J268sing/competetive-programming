class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // o(n^) implementation
  /*      for(int i = 0; i < nums.size(); ++i){
            int compare = nums[i];
            for(int j = i+1; j < nums.size(); ++j){
                if(nums[j] == compare){
                    nums.erase(nums.begin() + j);
                    --j;
                } else {
                    break;
                }
            }
        }*/
        
        //o(n) implementation
        if(nums.size() == 0){ return 0;}
        for(int i = 0; i  < nums.size()-1; ++i){
            if(nums[i] == nums[i+1]){
                nums.erase(nums.begin() + i);
                --i;
            }
        }
        
        return nums.size();
    }
};