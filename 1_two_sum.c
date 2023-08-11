int* twoSum(int* nums, int numsSize, int target,int* returnSize) { 
{
    int left = 0, right = 0;
    int* result = (int*)malloc(sizeof(int) * 2);
    for ( left = 0; left < numsSize; left++)
    {
        for (right = left + 1; right < numsSize; right++)
        {
            if (nums[left] + nums[right] == target)
            {
                result[0] = left;
                result[1] = right;
                *returnSize = 2;
                return result;
            }
        }
        
    }
    return 0;
}