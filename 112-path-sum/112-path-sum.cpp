/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum,int currsum=0) {
      if(!root)
      return false;
      if(!root->left&&!root->right)
      return targetSum==(currsum+root->val);              
      int temp=root->val;
      return hasPathSum(root->left,targetSum,currsum+temp)||hasPathSum(root->right,targetSum,currsum+temp);
    }
};