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
    ListNode* reverse(ListNode* middle){
        ListNode* prev = NULL;
        ListNode* current = middle;
        ListNode* next = middle;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    ListNode* mid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL) return head;
        ListNode* temp1 = head;
        ListNode* middle = mid(head);
        ListNode* newhead = reverse(middle->next);
        ListNode* temp2 = newhead;
        while(temp2!=NULL){
            if(temp1->val != temp2->val) {
                reverse(newhead);
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2 -> next;
        }
        reverse(newhead);
        return true;
    }
};