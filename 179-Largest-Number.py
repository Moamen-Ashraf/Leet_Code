class Solution:
    def compare(self, a, b):
        if a + b > b + a:
            return -1
        elif a + b < b + a:
            return 1
        else:
            return 0
 
    def largestNumber(self, nums: List[int]) -> str:
        strlist = [str(i) for i in nums]
        sortlist = sorted(strlist , key = cmp_to_key(self.compare))
        if sortlist[0] == '0':
            return '0'
        return(''.join(sortlist))
        