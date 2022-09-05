/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        queue<Node* > q;
        if(root==NULL)return ans;
        q.push(root);
        while(!q.empty())
        {
            vector<int> a;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                auto t = q.front();
                q.pop();
               a.push_back(t->val);
               auto m = t->children;
                for(int i=0;i<m.size();i++)
                    q.push(m[i]); 
            } ans.push_back(a);     
        }
        return ans;    
    }
};