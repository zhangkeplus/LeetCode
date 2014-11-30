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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(n == 1 && !head->next){
            head = NULL;
            return head;
        }
        ListNode *p = new ListNode(-1);
        p->next = head;
        ListNode *del = head;
        ListNode *tag = head;
        for(int i = 1; i < n; i++){
            tag = tag->next;
        }
        while(tag->next!=NULL){
            tag = tag->next;
            del = del->next;
            p = p->next;
        }
        if(del == head){
            return head->next;
        }
        p->next = del->next;
        return head;
    }
};
