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
    void re(TreeNode* root)
    {
        if(root==NULL)return;
        auto temp=root->left;
        root->left=root->right;
        root->right=temp;
        re(root->left);
        re(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        re(root);
        return root;
    }
};