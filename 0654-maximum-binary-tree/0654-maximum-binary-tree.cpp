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
    TreeNode* construct(vector<int>& nums,int lo,int hi){
        if(lo>hi) return NULL;
        int mx = lo + (hi-lo)/2;
        for(int i=lo;i<=hi;i++){
           if(nums[i]>nums[mx]) mx = i;
        }
        TreeNode* root = new TreeNode(nums[mx]);
        root->left = construct(nums,lo,mx-1);
        root->right = construct(nums,mx+1,hi);
        return root;
                          
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return construct(nums,0,nums.size()-1);
    }
};