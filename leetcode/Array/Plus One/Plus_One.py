class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        length = len(digits)-1
        while (length >=0):
            if((digits[length] == 9)and(length == 0)):
                digits[length] = 0
                digits.insert(0, 1)
            elif (digits[length] == 9):
                digits[length] = 0;
            else:
                digits[length] = digits[length] + 1;
                break;
            
            length = length - 1
        return digits;
    
    
    
     