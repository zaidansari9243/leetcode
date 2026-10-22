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
    void helper(TreeNode* root,int &count){
        if(root==NULL) return;
        if(root->val%2==0){
            if(root->left!=NULL){
                if(root->left->left != NULL) count += root->left->left->val;
                if(root->left->right != NULL) count += root->left->right->val;
            }
            if(root->right!=NULL){
                if(root->right->left != NULL) count += root->right->left->val;
                if(root->right->right != NULL) count += root->right->right->val;
            }
        }
        helper(root->left,count);
        helper(root->right,count);
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL) return 0;
        int count = 0;
        helper(root,count);
        return count;
    }
};