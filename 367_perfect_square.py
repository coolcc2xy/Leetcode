class Solution:
    def isPerfectSquare(self,num: int) -> bool:
        left , right = 0, num
        while left <= right:
            middle = left + (right - left) // 2
            sqr = middle * middle
            if(sqr < num):
                left = middle + 1
            elif(sqr > num):
                right = middle -1
            else:
                return True

        return False