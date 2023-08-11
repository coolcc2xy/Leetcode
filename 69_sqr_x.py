class Solution:
    def mySqrt(self, x: int) -> int:
        left , right = 0 , x
        result = -1
        while(left <= right):
            middle = left + (right - left) // 2
            sqr = middle * middle
            if(sqr < x):
                result = middle
                left = middle + 1
            elif(sqr > x):
                right = middle -1
            else:
                result = middle
                return result
        return result