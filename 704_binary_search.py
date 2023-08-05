class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left  = 0
        right = lens(nums)
        while left <= right:
            middle = (left + right)/2
            if nums[middle] < target:
                left = middle + 1
            elif nums[middle] > target:
                right = middle - 1
            else:
                return middle


        return -1


