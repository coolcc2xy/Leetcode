// 快慢指针
int removeElement(int* nums, int numsSize, int val){
    int slow = 0; // 慢指针永远指向删除目标值后新数组的元素
    for (int fast = 0; fast < numsSize; fast++) // 快指针遍历原数组
    {
        if (nums[fast] != val) 
        {
            // 若当前值不等于目标值，则将慢指针指向当前值
            nums[slow] = nums[fast];
            // 移动慢指针
            slow++;
        }
        
    }
    return slow;
}

int removeElement(int* nums, int numsSize, int val)
{
    // i 相当于 快指针
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            // 若当前值等于目标值，则将当前值与后面的值进行交换，覆盖掉删除的数组元素
            for (int j = i + 1; j < numsSize; j++)
            {
                nums[j - 1] = nums[j];
            }
            i--;
            numsSize--;
        }
        
    }
    return numsSize;
}