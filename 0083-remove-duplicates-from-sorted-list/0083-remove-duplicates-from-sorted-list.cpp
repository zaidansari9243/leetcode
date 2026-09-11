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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        if(head -> next == NULL) return head;
        ListNode* tempa = head; 
       ListNode* tempb = head->next ;
       while(tempb != NULL){
        if(tempa->val != tempb->val){
            tempa->next = tempb;
            tempa = tempb;
        }
        tempb = tempb->next;
       }
       tempa->next = NULL;
       
     return head;

    }
};