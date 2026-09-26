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
    int pairSum(ListNode* head) {
        int size=0;
        int mx = 0;
    stack<int> st;
    ListNode* temp;
    temp = head;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    temp = head;
    for(int i=0;i<size/2;i++){
        st.push(temp->val);
        temp = temp->next;
    }
    while(temp != NULL){
        int sum = st.top() + temp->val;
        mx = max(mx,sum);
        st.pop();
        temp = temp->next;
    }
    return mx;
    }
};