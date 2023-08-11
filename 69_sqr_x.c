int mSqrt(int x)
{
    int left = 0, right = x;
    int result = -1;
    while (left <= right)
    {
        long int middle = left + (right - left) / 2;
        if (middle * middle <= x)
        {
            result = middle;
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    
    }
    return result;
}