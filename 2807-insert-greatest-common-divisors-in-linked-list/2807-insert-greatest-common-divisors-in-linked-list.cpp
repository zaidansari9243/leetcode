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
    ListNode* insertGreatestCommonDivisors(ListNode* root) {
        if(root==NULL) return NULL;
        ListNode* a = root;
        ListNode* b = root->next;
        while(b!=NULL){
            int g = gcd(a->val,b->val);
             ListNode* cd = new  ListNode(g);
             a->next = cd;
             cd->next = b;
             a = a->next->next;
             b = b->next;
        }
         
        return root;
    }
};