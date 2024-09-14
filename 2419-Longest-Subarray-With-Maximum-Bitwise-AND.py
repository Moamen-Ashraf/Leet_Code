class Solution:
    def PrefixSum(self, num):
        arr = num[:]
        for i in range(1, len(arr)):
            arr[i] &= arr[i - 1]
        return arr

    def longestSubarray(self, nums: List[int]) -> int:
        mxlen = 0
        cnt = 0
        mx = max(nums)

        for i in range(1, len(nums)):
            if nums[i] == nums[i - 1] == mx:
                cnt += 1
            else:
                mxlen = max(mxlen, cnt)
                cnt = 0

        return max(cnt, mxlen) + 1
