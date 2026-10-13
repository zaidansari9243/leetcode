/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void leftmost(TreeNode* root, int level, int& maxlevel, int& ans) {
        if (root == NULL)
            return ;
        if (level > maxlevel) {
            maxlevel = level;
            ans = root->val;
        }
        leftmost(root->left, level + 1, maxlevel, ans);
        leftmost(root->right, level + 1, maxlevel, ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        int maxlevel = -1;
        int ans = 0;
        leftmost(root,0,maxlevel,ans);
        return ans;
    }
};