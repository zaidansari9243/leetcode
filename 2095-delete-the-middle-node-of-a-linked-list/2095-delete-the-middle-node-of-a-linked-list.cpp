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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL ){
            size++;
            temp = temp -> next;
        }
        if(size==1) {
            temp = head = NULL;
            return head;
        };
        temp = head;
        for(int i=0;i<(size/2)-1;i++){
            temp = temp -> next;
        }
        temp -> next = temp -> next -> next;
    
        return head; 
    }
};