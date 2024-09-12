# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:     
        cumsum = 0
        sumList = ListNode()
        ptr = sumList
        while head:
            if head.val == 0 and cumsum:
                ptr.next = ListNode(cumsum)
                ptr = ptr.next
                cumsum = 0 
            cumsum += head.val
            head = head.next
        
        return sumList.next