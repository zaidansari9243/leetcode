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
    TreeNode* build(vector<int>& inorder,int il , int ih, vector<int>& postorder ,int pl,int ph){
        if(ph>pl) return NULL;
        TreeNode* root = new TreeNode(postorder[pl]);
        if(ph==pl) return root;
        int i = il;
        while(i<=ih){
            if(inorder[i]==postorder[pl]) break;
            i++;
        }
        root->right = build(inorder,i+1,ih,postorder,pl-1,(pl-1)-(ih-i)+1);
        root->left = build(inorder,il,i-1,postorder,(pl-1)-(ih-i),ph);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return build(inorder,0,n-1,postorder,n-1,0);

    }
};