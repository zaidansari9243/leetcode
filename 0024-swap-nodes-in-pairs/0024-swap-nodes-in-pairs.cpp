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
    ListNode* swapPairs(ListNode* head) {
     if(head==NULL || head->next == NULL) return head; 
      ListNode* fool  = new ListNode(-1);
      ListNode* tempf = fool;
      ListNode* odd = head;
      ListNode* even = head->next;  
      while(even != NULL && even->next != NULL){
        ListNode* nexteven = even->next->next;
        ListNode* nextodd = odd->next->next;
        tempf->next = even ;
        tempf = even;
        tempf->next = odd ;
        tempf = odd;
        even = nexteven;
        odd = nextodd;
      }
      if(even){
        tempf->next = even;
        tempf = even;
      }
      if(odd){
        tempf->next = odd;
        tempf=odd;
      }
      tempf->next = NULL;
      return fool->next;
    }
};