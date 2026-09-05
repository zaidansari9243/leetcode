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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* temp1 = head;
       ListNode* temp2 = head;
       int size = 0 ;
       while(temp1 != NULL){
        size++;
        temp1 = temp1 -> next;
       } 
       temp1 = head;
       for(int i=0;i<k-1;i++){
        temp1 = temp1 -> next;
       }
       for(int j=0;j<(size-k);j++){
        temp2 = temp2 -> next;
       }
       int temp = 0;
       temp = temp1->val ;
       temp1->val = temp2->val;
       temp2->val = temp;
       return head;
    }
};