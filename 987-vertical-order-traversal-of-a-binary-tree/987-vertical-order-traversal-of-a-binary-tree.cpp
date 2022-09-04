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
    vector<vector < int>> ans;
    unordered_map<int, vector<pair<int, int>>> mp;
    int mn, mx;
    public:
        void helper(TreeNode *root, int hd, int level)
        {
            if (!root) return;
            mp[hd].push_back({ level,
                root->val });
            if (root->left)
            {
                helper(root->left, hd - 1, level + 1);
                mn = min(mn, hd - 1);
            }
            if (root->right)
            {
                helper(root->right, hd + 1, level + 1);
                mx = max(mx, hd + 1);
            }
        }

    vector<vector < int>> verticalTraversal(TreeNode *root)
    {
        mn = 0;
        mx = 0;
        helper(root, 0, 0);
        for (auto[hd, vec]: mp)
        {
            sort(mp[hd].begin(), mp[hd].end());
        }
        for (int i = mn; i <= mx; i++)
        {
            vector<int> temp;
            for (auto[level, data]: mp[i])
            {
                temp.push_back(data);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};