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
    long long maxi(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
        long long lft = maxi(root->left);
        long long rgt = maxi(root->right);
        return max(((long long)root->val),max(lft,rgt));
    }
    long long mini(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
        long long lft = mini(root->left);
        long long rgt = mini(root->right);
        return min(((long long)root->val),min(lft,rgt));
    }
    bool isValidBST(TreeNode* root) {
        if((root==NULL) || (root->left==NULL && root->right==NULL)) return true;
        else if(root->val <= maxi(root->left) || root->val >= mini(root->right)) return false;
        else return isValidBST(root->left) && isValidBST(root->right); 
    }
};