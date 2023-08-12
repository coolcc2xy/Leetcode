/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int slow = 0;
    int fast = numsSize - 1;
    int* res = (int*)malloc(sizeof(int) * numsSize);
    int index;
    for(index = numsSize - 1;index >= 0;index--)
    {
        int fastSqr = nums[fast] * nums[fast];
        int slowSqr = nums[slow] * nums[slow];
        if(slowSqr > fastSqr)
        {
            res[index] = slowSqr;
            slow++;
        }
        else
        {
            res[index] = fastSqr;
            fast--;
        }
        
    }
    return res;
}