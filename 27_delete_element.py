from typing import List
class Solution:
    # Python 快慢指针解法
    def removeElement(self, nums: List[int], val: int) -> int:
        fast , slow = 0 , 0
        # 快指针遍历数组
        while fast < len(nums):
            # 如果和目标值不同，将指向的值赋给慢指针
            if nums[fast] != val:
                nums[slow] = nums[fast]
                # 慢指针+1
                slow += 1
            # 快指针+1
            fast += 1

        return slow


    def removeElement(self,nums: List[int], val: int) -> int:
        i , j = 0 , 0
        size = len(nums)
        while i < size:
            # 如果当前值等于目标值，则将当前值与后面值交换，覆盖掉删除的数组元素
            if nums[i] == val:
                for j in range(i + 1, size):
                    nums[j-1] = nums[j]
                i-=1
                size-=1
        return size

