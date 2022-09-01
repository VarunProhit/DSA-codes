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
    int cnt=0;
    void cn(TreeNode *root, int ma)
    {
        if(root == NULL)
            return;
       ma = max(ma,root->val);
       if(root->val >=ma)cnt++;
       cn(root->left,ma);
       cn(root->right,ma);
        
    }
    int goodNodes(TreeNode* root) {
        cn(root,INT_MIN);
        return cnt;
    }
};