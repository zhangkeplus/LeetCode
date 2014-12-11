/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(!head || !head->next){
            return head;
        }
        ListNode *t = head->next;
        head->next = t->next;
        t->next = head;
        head = t;
        
        ListNode *p = head->next;
        while(p->next && p->next->next){
            ListNode *x = p->next;
            ListNode *y = p->next->next;
            x->next = y->next;
            y->next = x;
            p->next = y;
            p = x;
        }
        return head;
    }
};
