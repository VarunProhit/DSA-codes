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
    void mp(TreeNode* root, map<int,vector<int>> &m)
    {
        if(root==NULL)return;
        if(root->left){
            m[root->val].push_back(root->left->val);
            m[root->left->val].push_back(root->val);
        }
        if(root->right)
        {
           m[root->val].push_back(root->right->val);
           m[root->right->val].push_back(root->val);
        }
        mp(root->left,m);
        mp(root->right,m);
        
    }
    int amountOfTime(TreeNode* root, int start) {
        
      map<int,vector<int>> m;
      mp(root,m);
      map<int,int> vis;
        int ans=0;
        int st=start;
        int min=1;
        queue<int> q;
        q.push(start);
            vis[start]=min;
      while(!q.empty())
      {       min++;
          int n = q.size();
          for(int i=0;i<n;i++)
          {
           st = q.front();
              q.pop();

          auto x = m[st];
          for(auto y : x)
          {
              if(vis[y])continue;
              vis[y]=min;
              q.push(y);
          }
          }
      
      }
    
        for(auto x:vis)
        {  ans = max(ans,x.second-1);

        }
         return ans;
      
    }
};