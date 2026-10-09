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
    void helper(TreeNode* root, vector<int> v, int targetSum, bool& flag) {
        if (root == NULL)
            return;
        v.push_back(root->val);
        if (root->left == NULL && root->right == NULL) {
            int s = 0;
            for (int i = 0; i < v.size(); i++) {
                s += v[i];
            }
            if (s == targetSum)
                flag = true;

            return;
        }
        helper(root->left, v, targetSum, flag);
        helper(root->right, v, targetSum, flag);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        bool flag = false;
        helper(root, v, targetSum, flag);
        if (flag == true)
            return true;
        return false;
    }
};
