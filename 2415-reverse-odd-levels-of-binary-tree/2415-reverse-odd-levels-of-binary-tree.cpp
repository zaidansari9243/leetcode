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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (root == NULL)
            return root;
        int level = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<TreeNode*> node;
            for (int i = 0; i < n; i++) {
                TreeNode* temp = q.front();
                q.pop();
                node.push_back(temp);
                if (temp->left != NULL)  q.push(temp->left);
                if (temp->right != NULL)  q.push(temp->right);
                   
            }

            if(level%2==1){
                int lo = 0;
                int hi = node.size()-1;
                while(lo<hi){
                    swap(node[lo]->val,node[hi]->val);
                    lo++;
                    hi--;
                }
            }

            level++;
        }
        return root;
    }
};