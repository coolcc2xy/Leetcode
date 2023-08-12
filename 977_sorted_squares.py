from typing import List


class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        slow, fast, result = 0 , len(nums)-1 , len(nums)-1
        res = [float('inf')]*len(nums)
        while slow <= fast:
            if((nums[slow] * nums[slow]) > (nums[fast] * nums[fast])):
               res[result] = nums[slow] * nums[slow]
               slow+=1
            else:
                res[result] = nums[fast] * nums[fast]
                fast-=1

            result+=1
        return res