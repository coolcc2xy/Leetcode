from typing import List

# 两层for循环暴力破解，还可以用滑动窗口，二刷时学习
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        left , right = 0 , 0
        for left in range(0,len(nums)):
            for right in range(left+1,len(nums)):
                if(nums[left] + nums[right] == target):
                    return [left,right]


        return 0