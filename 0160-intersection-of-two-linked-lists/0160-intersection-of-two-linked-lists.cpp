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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        int lenA=0;
        ListNode* temp2 = headB;
        int lenB =0;
        while(temp1!=NULL){
            lenA++;
            temp1= temp1->next;
        }
        while(temp2!=NULL){
            lenB++;
            temp2= temp2->next;
        }
        int x = abs(lenA-lenB);
        if(lenA>lenB) {
            while(x--){
          headA = headA->next;
            }
        }
        else if(lenB>lenA){
             while(x--){
          headB = headB->next;
            }
        }
  while(headA!=NULL && headB!=NULL){
    if(headA==headB){
        return headA;
    }
    headA = headA->next;
    headB = headB->next;
  }
  return NULL;
    }
};