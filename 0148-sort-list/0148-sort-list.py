# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return
        arr = []
        temp = head

        while temp != None:
            value = temp.val
            arr.append(value)
            temp = temp.next

        i = 0
        arr.sort()
        temp = head
        while temp != None:
            temp.val = arr[i]
            i = i + 1
            temp = temp.next

        return head