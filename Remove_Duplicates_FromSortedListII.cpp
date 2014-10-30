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
        ListNode *first = deleteSameHead(head);
        if (first == NULL){
            return NULL;
        }
        ListNode *r = first;
        while(r!=NULL){
            ListNode *temp = deleteSameHead(r->next);
            r->next = temp;
            r = temp;
        }
        return first;
    }
    ListNode *deleteSameHead(ListNode *t){
        if(t == NULL || t->next == NULL){
            return t;
        }
        if (t->val != t->next->val){
            return t;
        }
        while(t->val == t->next->val){
            t = t->next;
            if(t->next == NULL){
                return NULL;
            }
        }
        return deleteSameHead(t->next);
    }
};
