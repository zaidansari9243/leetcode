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
    TreeNode* formtree(vector<int> &v,int lo,int hi){
        if(lo>hi) return NULL;
        int mid = lo +(hi-lo)/2;
        TreeNode* node = new TreeNode(v[mid]);
        node->left = formtree(v,lo,mid-1);
        node->right = formtree(v,mid+1,hi);
        return node;
    }
    void inorder(TreeNode* root,vector<int> &v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        return formtree(v,0,v.size()-1);
    }
};