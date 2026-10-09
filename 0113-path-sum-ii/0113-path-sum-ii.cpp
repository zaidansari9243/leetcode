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
    void helper(TreeNode* root, vector<int> v,vector<vector<int>> &ans,int targetSum){
        if(root==NULL) return;
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            int s = 0;
            for(int i=0;i<v.size();i++){
                s += v[i];
            }
            if(s==targetSum) ans.push_back(v);
            return;
        }
        helper(root->left,v,ans,targetSum);
        helper(root->right,v,ans,targetSum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root,v,ans,targetSum);
        return ans;
    }
};