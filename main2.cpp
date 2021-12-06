#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
 int data;
 // int height;
 Node* left, *right;
 Node(int val){
 data=val;
 left=NULL;
 right=NULL;
// height = 0;
 }
};
// Insertion
Node* insertBST(){
int rootdata;
    cout<<"enter root data: ";
    cin>>rootdata;

    if(rootdata == 0)
    {
        return NULL;
    }
    Node* root = new Node(rootdata);

    queue<Node*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        Node* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"enter left child of "<<front->data<<": ";
        int lchild;
        cin>>lchild;
        if(lchild != 0)
        {
            Node* child = new Node(lchild);
            front->left = child;
             pendingNodes.push(child);
        }

        cout<<"enter right child of "<<front->data<<": ";
        int rchild;
        cin>>rchild;
        if(rchild != 0)
        {
             Node* chil = new Node(rchild);
            front->right = chil;
            pendingNodes.push(chil);
        }
    }
    return root;
}
// height calculation
int height(Node* root)
{
  if(root==NULL)
  return 0;
  else
  return 1 + max(height(root->left),height(root->right));

}

// Traversal
void printTree(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<": ";
    if(root->left != NULL)
    {
        cout<<"L"<<root->left->data;
    }
    if(root->right != NULL)
    {
        cout<<" R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

int main(){
Node* root=NULL;

 root=insertBST();


printTree(root);
cout<<height(root);
 return 0;
}