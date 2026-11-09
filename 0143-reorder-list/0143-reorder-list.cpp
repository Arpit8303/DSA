/**
 * Definition for singly-linked list.
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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return ;
        }
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        ListNode* last = temp;
        while(head!=last && head->next!=last){
            temp = head;
            while(temp->next!=last){
                temp = temp->next;
            }
            ListNode* secondLast = temp;
            secondLast->next = NULL;
            last->next = head->next;
            head->next = last;
               head = last->next;
               last = secondLast;
        }
    }
};