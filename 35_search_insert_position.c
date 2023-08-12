int searchInsert(int* nums, int numsSize, int target)
{
    int left = 0, right = numsSize - 1;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if(nums[middle] < target)
        {
            left = middle + 1;
        }
        else if(nums[middle] > target)
        {
            right = middle - 1;
        }
        else
        {
            return middle;
        }    
    }
    // 目标值再数组所有元素之前    目标值插入数组中     目标值在数组所有元素之后
    return left;
}