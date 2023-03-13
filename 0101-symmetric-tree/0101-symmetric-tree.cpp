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
   bool isSame(TreeNode* t, TreeNode*s){
	if(t==nullptr&&s==nullptr) return true;
	if(t==nullptr||s==nullptr) return false;
	if(t->val!=s->val) return false;
	 // comparing alternating nodes, i.e. left with right and vice-versa
	return isSame(t->right,s->left)&&isSame(t->left,s->right); 
}

bool isLeaf(TreeNode*root){
	return !root->left&&!root->right;
}

bool isSymmetric(TreeNode* root) {
	if(isLeaf(root)) return true;  // edge case if only one node i.e. root present
	return isSame(root->left,root->right);
}
};