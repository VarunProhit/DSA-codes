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
    vector<vector<int>> levelOrder(TreeNode* root) {
        	vector<vector<int>> output;
		if(root ==  NULL){
			return output;
		}
		//vector<int> vec;

		queue<TreeNode*> qu;
		qu.push(root);

		while(!qu.empty()){
			int num = qu.size();
			vector<int> vec;

			for(int i =0 ;i < num ;i++){
				TreeNode* temp = qu.front();
				vec.push_back(temp->val);
				qu.pop();

				if(temp->left != NULL){
					qu.push(temp->left);
				}
				if(temp->right != NULL){
					qu.push(temp->right);
				}

			}
			output.push_back(vec);
		}
		return output;

	
    }
};