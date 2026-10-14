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
    TreeNode* build(vector<int>& preorder,int pl,int ph , vector<int>& inorder , int inlo , int inhi){
        if(pl>ph) return NULL;
        TreeNode* root = new TreeNode(preorder[pl]);
        if(ph==pl) return root;
        int i=inlo;
        while(i<=inhi){
            if(inorder[i]==preorder[pl]) break;
            i++;
        }
        root->left = build(preorder ,pl+1,pl+i-inlo ,inorder ,inlo,i-1);
        root->right = build(preorder ,pl+i-inlo+1,ph ,inorder ,i+1,inhi);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return build(preorder ,0,n-1 ,inorder ,0,n-1);
    }
};