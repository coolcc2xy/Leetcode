// 左闭右闭
int search(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize;
    while (left <= right)
    {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target)
        {
            return middle;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}

// 左闭右开
int search1(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    while (left < right)
    {
        int middle = left + (right - left) / 2;
        if (nums[middle] == target)
        {
            return middle;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle;
        }
    }
    return -1;
}