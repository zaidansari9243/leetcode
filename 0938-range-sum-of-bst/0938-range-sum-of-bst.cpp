/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void travel(TreeNode* root,int &sm, int low, int high){
        if(root==NULL) return;
        if(root->val>=low && root->val<= high) sm += root->val;
        travel(root->left,sm,low,high);
        travel(root->right,sm,low,high);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sm = 0;
        travel(root,sm,low,high);
        return sm;
        
    }
};