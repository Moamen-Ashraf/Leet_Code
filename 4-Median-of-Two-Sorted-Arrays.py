class Solution:
    def merge(self, nums1 , nums2):
        merged = []
        i, j = 0, 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] < nums2[j]:
                merged.append(nums1[i])
                i += 1
            else:
                merged.append(nums2[j])
                j += 1
        merged.extend(nums1[i:])
        merged.extend(nums2[j:])
        return merged

    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        l = self.merge(nums1,nums2)
        n = len(l)
        if n % 2 != 0:
            med = l[n // 2]
        else:
            med = (l[n // 2] + l[n // 2 - 1]) / 2
        
        return med