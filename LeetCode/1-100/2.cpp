class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1), *cur = head;
        int carry = 0;
        int a,b,c,sum;
        while(l1 || l2){
            a = l1 ? l1->val : 0;
            b = l2 ? l2->val : 0;
            sum = a + b + carry;
            c = sum % 10;
            head->next = new ListNode(c);
            carry = sum / 10;
            if(l1)l1 = l1->next;
            if(l2)l2 = l2->next;
            head = head->next;
        }
        if(carry)head->next = new ListNode(carry);
        return cur->next;
    }
};