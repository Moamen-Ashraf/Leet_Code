class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        def merge(nums1: List[int], nums2: List[int]) -> List[int]:
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

        l = list()
        for i in matrix:
            l = merge(l,i)

        return l[k-1]