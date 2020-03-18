class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size()-1;
        while(len >= 0){
            if((digits[len] == 9)&&(len == 0)){
                digits[len] = 0;
                digits.insert(digits.begin(), 1);
                
            }else if(digits[len] == 9){
                digits[len] = 0;
            } else {
                digits[len] = digits[len] + 1;
                break;
            }
            len = len - 1;
        }
        return digits;
    }
};