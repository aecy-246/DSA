/**
 * Definition for singly-linked list->
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* itr1= l1;
        ListNode* itr2 = l2;
        ListNode* l3 = new ListNode();
        ListNode* itr3 = l3;
        while(itr1!=nullptr and itr2!=nullptr){
            if(itr3==nullptr){
                itr3->val = (itr1->val+itr2->val+carry)%10;
                carry = (itr1->val+itr2->val+carry)/10;
            }
            else{
                itr3->next = new ListNode((itr1->val+itr2->val+carry)%10);
                carry = (itr1->val+itr2->val+carry)/10;
            }
            itr1 = itr1->next;
            itr2 = itr2->next;
            itr3 = itr3->next;
        }
        while (itr1!=nullptr){
            itr3->next = new ListNode((itr1->val+carry)%10);
            carry = (itr1->val+carry)/10;
            itr1 = itr1->next;
            itr3 = itr3->next;
        }
        while (itr2!=nullptr){
            itr3->next = new ListNode((itr2->val+carry)%10);
            carry = (itr2->val+carry)/10;
            itr2 = itr2->next;
            itr3 = itr3->next;
        }
        while(carry!=0){
            itr3->next = new ListNode(carry%10);
            carry/=10;
            itr3 = itr3->next;
        }
        l3 = l3->next;
        return l3;
    }
};