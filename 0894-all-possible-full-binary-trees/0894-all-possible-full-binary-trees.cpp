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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2==0) return {};   
        //if no. of nodes is odd then we can't build FBT
        
        if(n==1) return {new TreeNode(0)}; 
        //If there is just one node then return that only.It's the BASE CASE.
        
        vector<TreeNode*> ans;
        for(int i=1;i<n;i+=2){
        /*Since every node cannot be root.For ex: n=5, [0,0,0,0,0] if we select the
        1st index then on the left and right side there will be odd no. of nodes
        from which we can build the FBT. Similarly, with the 3rd index node we can
        do the same. That's why we are starting the loop from 1, and incrementing
        it by 2.*/
            
        //For the left subtree we'll have i nodes and for the right subtree we'll
        //have n-i-1 nodes.
            
        vector<TreeNode*> left=allPossibleFBT(i);
        vector<TreeNode*> right=allPossibleFBT(n-i-1);
        //We will run nested loops. We'll go to every left and every right and add 
        //it to our answer.
        for(auto l: left){
            for(auto r: right){
                TreeNode* root=new TreeNode(0);
                root->left=l;
                root->right=r;
                ans.push_back(root);
               }
           }
        }
        return ans;
    }
};