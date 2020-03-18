class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        ## o(n) implementation
        i = len(nums)-1
        
        while (i>=1):
            if nums[i] == nums[i-1]:
                nums.pop(i)
            i -=1