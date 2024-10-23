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
    TreeNode* replaceValueInTree(TreeNode* root) {
        long sum=0,prev=0;
        queue<pair<TreeNode*,long>> q;
        q.push({root,0});
        while(!q.empty()){
            int n = q.size();
             prev=sum;
             sum=0;
            for(int i=0;i<n;i++)
            {
                auto a = q.front();
                TreeNode* node = a.first;
                long val = a.second;
                q.pop();
                if(node->left && node->right){
                    q.push({node->left,node->right->val});
                    q.push({node->right,node->left->val});
                    sum+=node->left->val;
                    sum+=node->right->val;
                }
                else if(node->left){
                    q.push({node->left,0});
                    sum+=node->left->val;
                }
                else if(node->right){
                    q.push({node->right,0});
                        sum+=node->right->val;
                }
                node->val = max(long(0), long(prev - node->val-val));
            }
            
        }
        return root;
    }
};