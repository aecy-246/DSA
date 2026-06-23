# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        itr1 = l1
        itr2 = l2
        l3 = ListNode()
        itr3 = l3
        carry = 0
        while itr1 and itr2:
            itr3.next = ListNode((itr1.val+itr2.val+carry)%10, None)
            carry = (itr1.val+itr2.val+carry)//10
            itr1 = itr1.next
            itr2 = itr2.next
            itr3 = itr3.next
        while itr1:
            itr3.next = ListNode((itr1.val+carry)%10, None)
            carry = (itr1.val+carry)//10
            itr1 = itr1.next
            itr3 = itr3.next
        while itr2:
            itr3.next = ListNode((itr2.val+carry)%10, None)
            carry = (itr2.val+carry)//10
            itr2 = itr2.next
            itr3 = itr3.next
        while(carry!=0):
            itr3.next = ListNode(carry, None)
            carry//=10

        return l3.next