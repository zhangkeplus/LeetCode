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
    ListNode *l = new ListNode(-1);
    ListNode *t = l;
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(!l1 && !l2){
            return NULL;
        }
        while (l1 || l2){
            if (l1 && l2){
                if(l1->val <= l2->val){
                    t->next = l1;
                    l1 = l1->next;
                }
                else{
                    t->next = l2;
                    l2=l2->next;
                }
                t = t->next;
            }
            else if(!l2){
                t->next = l1;
                return l->next;
            }
            else if(!l1){
                t->next = l2;
                return l->next;
            }
        }
        return l->next;
    }
};
