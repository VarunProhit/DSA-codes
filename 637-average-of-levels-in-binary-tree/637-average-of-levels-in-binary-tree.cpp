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
        vector<double> averageOfLevels(TreeNode *root)
        {
            queue<TreeNode*> q;
            q.push(root);
            vector<double> ans;
            while (!q.empty())
            {
                double a = 0.0;
                int n = q.size();
                int k = n;
                while (n--)
                {
                    auto m = q.front();
                    q.pop();
                    if (m->left)
                        q.push(m->left);
                    if (m->right)
                        q.push(m->right);
                    a += m->val;
                }
                a = (a *1.0) / (k *1.0);
                ans.push_back(a);
            }
            return ans;
        }
};