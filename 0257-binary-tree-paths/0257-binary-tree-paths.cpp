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
    void helper(TreeNode* root, vector<string>& str, string s) {

        if (root == NULL)
            return;
        string a = to_string(root->val);
        if (root->left == NULL && root->right == NULL) {
            s += a;
            str.push_back(s);
            return;
        }

        helper(root->left, str, s + a + "->");
        helper(root->right, str, s + a + "->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> str;
        string s = "";
        helper(root, str, s);
        return str;
    }
};