class Solution:
    def reverse(self, x: int) -> int:
        s = str(x)
        rev = s[::-1]

        if rev[::-1][0] == '-':
            rev = -1*int(rev[:-1])
        
        if int(rev) < -2**31 or int(rev) > 2**31 - 1: 
            return 0
        return int(rev)
