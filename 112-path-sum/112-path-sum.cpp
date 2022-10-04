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
class Solution
{
    public:
        bool dfs(TreeNode *root, int currSum, int &targetSum)
        {
            if (root == NULL) return false;
            if (root->left == NULL and root->right == NULL) return currSum + root->val == targetSum;
            return dfs(root->left, currSum + root->val, targetSum) || dfs(root->right, currSum + root->val, targetSum);
        }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return dfs(root, 0, targetSum);
    }
};