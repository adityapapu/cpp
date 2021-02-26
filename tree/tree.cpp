#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key=k;
        left=right=NULL;
    }
};

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }

}
void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }

}
int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}
void PrintKDist(Node *root,int k)
{
    if(root==NULL)
        return;
    if(k==0)
    {
        cout<<root->key<<" ";
    }
    else
    {
        PrintKDist(root->left,k-1);
        PrintKDist(root->right,k-1);
    }

}
int main()
{
    Node *root =new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(50);
    root->right->left->right=new Node(60);
    inorder(root);
    cout<<endl<<height(root);
}