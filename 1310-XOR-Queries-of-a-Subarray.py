class Solution:    
    def PrefixXor(self, arr):
        prefix = arr[:]
        for i in range(1 ,len(arr)):
            prefix[i] ^= prefix[i-1]
        return prefix
        
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:   
       res = []
       prefix = self.PrefixXor(arr)
       for i in queries:
            if i[0] > 0:
                res.append(prefix[i[1]] ^ prefix[i[0] - 1])
            else:
                res.append(prefix[i[1]])
        
       return(res)

        