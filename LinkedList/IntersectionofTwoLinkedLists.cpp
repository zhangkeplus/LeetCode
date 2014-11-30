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
    ListNode *getNode(ListNode *nodeA, ListNode *nodeB, int numA, int numB){
        if(numA <= numB){
            for(int i = 1 ; i <= numB-numA; i++){
                nodeB = nodeB->next;
            }
        }
        else{
            for(int i = 1; i <= numA-numB; i++){
                nodeA = nodeA->next;
            }
        }
        while(nodeA && nodeB){
            if (nodeA==nodeB){
                return nodeA;
            }
            nodeA = nodeA->next;
            nodeB = nodeB->next;
        }
        if(nodeA || nodeB){
            return  NULL;
        }
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int numA=0,numB=0;
        ListNode *t = headA;
        while(t){
            numA++;
            t = t->next;
        }
        t = headB;
        while(t){
            numB++;
            t = t->next;
        }
        return getNode(headA,headB,numA,numB);
    }
};
