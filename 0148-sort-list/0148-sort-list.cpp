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
    ListNode* mid(ListNode* head){
      ListNode* slow = head;
      ListNode* fast = head->next;
      while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast -> next -> next;
      } 
      return slow; 
    }
    ListNode* merge(ListNode* left,ListNode* right){
        ListNode* dummy = new ListNode(1);
      ListNode* tempd = dummy;
      while(left!=NULL && right != NULL){
        if(left -> val >= right -> val){
            tempd ->next = right;
            tempd = right;
            right = right ->next;       
        }
        else{
        tempd ->next = left;
            tempd = left;
            left = left ->next;
        }
      }
      if(left == NULL) tempd->next = right;
      else tempd->next = left;

      return dummy->next;

    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* middle = mid(head);
        ListNode* right = middle -> next;
        middle->next = NULL;
        ListNode* left = head;
        left = sortList(left);
        right = sortList(right);
        return merge(left,right);
    }
};