# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def doublestr(self, s):
        douStr = ''
        reminder = 0

        for i in range(len(s) - 1, -1, -1):
            current_digit = int(s[i])
            doubled_digit = current_digit * 2 + reminder
            douStr += str(doubled_digit % 10)
            reminder = doubled_digit // 10

        if reminder > 0:
            douStr += str(reminder)

        return douStr[::-1]

    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:
        num = str()

        while head:
            num += str(head.val)
            temp = head 
            head = head.next
            del temp

        dummyList = ListNode()
        ptr = dummyList

        num = self.doublestr(num)

        for i in num:
            ptr.next = ListNode(i)
            ptr = ptr.next

        return dummyList.next 

        

        
        