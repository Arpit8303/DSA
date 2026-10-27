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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        int len=0;
        vector<ListNode*> ans;
        while(temp!=NULL){
         len++;
         temp =temp->next;
        }
        temp = head;
        for(int i=1;i<=len;i++){
            if(i%2!=0){
               ans.push_back(temp);
            }
             temp =temp->next;
        }
        temp = head;
        for(int i=1;i<=len;i++){
            if(i%2==0){
                ans.push_back(temp);
            }
        temp =temp->next;
        }
        for(int i=1;i<len;i++){
            ans[i-1]->next = ans[i];
          
        }
          ans[len-1]->next = NULL;
        return ans[0];
    }
};