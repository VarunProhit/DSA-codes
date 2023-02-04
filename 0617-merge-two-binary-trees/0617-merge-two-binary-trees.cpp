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
    void join(TreeNode* r1, TreeNode* r2)
    {
         if(r1->left && r2->left)
         {
             r1->left->val+=r2->left->val;
             // if(r1->left->left && r2->left->left)
              join(r1->left,r2->left);
         }
        if(r1->right && r2->right)
         {
             r1->right->val+=r2->right->val;
          // if(r1->right->right && r2->right->right
             join(r1->right,r2->right);
        }
        // if(r1->right==NULL && r2->right==NULL)return;
        if(r1->right==NULL){r1->right=r2->right;}
        
        // if(r1->left==NULL && r2->left==NULL)return;
         if(r1->left==NULL){r1->left=r2->left;}
        // if(r1->right && r2->right==NULL)return;
        // if(r1->left && r2->left ==NULL)return; 
    }
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1 && root2)
        {root1->val+=root2->val;
        join(root1,root2);
        }
        if(root1==NULL)return root2;
       // root1->right=root2->right;
        return root1;
    }
};