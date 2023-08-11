bool isPerfectSquare(int num)
{
    int left = 0;
    int right = num;
    while (left <= right)
    {
        long int middle = left + (right - left) / 2;
        long int sqr = middle * middle;
        if (sqr < num)
        {
            left = middle + 1;
        }
        else if (sqr > num)
        {
            right = middle - 1;
        }
        else
        {
            return true;
        }
        
    }
    return false;
    
}