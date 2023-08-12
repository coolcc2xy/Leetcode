from typing import List


class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        left , right = 0 , len(nums) - 1
        middle = 0
        while left <= right:
            middle = left + (right - left)//2
            if nums[middle] < target:
                left = middle + 1
            elif nums[middle] > target:
                right = middle - 1
            else:
                return middle
        return right + 1