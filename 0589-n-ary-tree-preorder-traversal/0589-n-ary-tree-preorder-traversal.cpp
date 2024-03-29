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
    void pr(Node* root, vector<int> &v)
    {
         if(root==NULL)return;
        v.push_back(root->val);
        for(auto x:root->children)
             pr(x,v);
    }
    vector<int> preorder(Node* root) {
        vector<int> p;
        pr(root,p);
        return p;
    }
};