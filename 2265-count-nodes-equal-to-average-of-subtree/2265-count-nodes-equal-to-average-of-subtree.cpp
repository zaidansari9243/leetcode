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
    int sm(TreeNode* root){
        if(root==NULL) return 0;
        int lft = sm(root->left);
        int rht = sm(root->right);
        return root->val + lft + rht;
    }
    int nodes(TreeNode* root){
        if(root==NULL) return 0;
        int lft = nodes(root->left);
        int rht = nodes(root->right);
        return 1 + lft + rht;
    }
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL) return 0;
        int count=0;
        if(root->val == (int)(sm(root)/nodes(root))) count++ ;
        return count + averageOfSubtree(root->left) + averageOfSubtree(root->right) ;
        
        }
};