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
    TreeNode* inor(TreeNode* root,int &mxs){
        if(root==NULL) return NULL;
        inor(root->right,mxs);
        mxs += root->val;
        root->val = mxs;
        inor(root->left,mxs);
        return root;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int mxs= 0;
        return inor(root,mxs);
    }
};