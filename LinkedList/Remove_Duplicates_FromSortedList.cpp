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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        ListNode *p = head;
        ListNode *q;
        while(p->next!=NULL){
            q = p->next;
            if(p->val == q->val){
                p->next = q->next;
            }
            else{
                p = q;
            }
        }
        return head;
    }
};
