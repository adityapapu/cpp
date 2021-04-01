#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
Node *insert(Node *root, int x)
{
    if(root==NULL)
        return new Node(x);
    if(root->key<x)
        root->right=insert(root->right,x);
    else if(root->key>x)
        root->left=insert(root->left,x);
    return root;
}
bool search(Node *root, int x){
    if(root==NULL)
        return false;
    if(root->key==x)
        return true;
    else if(root->key>x){
        return search(root->left,x);
    }else{
        return search(root->right,x);
    }
} 

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}  


    
int main() {
	
    int ch,n;
    Node *root;
    do
    {
        cout<<"1.Insert a element\n2.Search an element\n3.Display\n4.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>ch;
        swithc(ch)
        {
            case 1:
                cout<<"Enter a number to insert: ";
                cin>>n;
                insert(root,n);
                cout<<"Sucessfully Inserted the element";
                break;
            case 2:
                cout<<"Enter a number to search in BST: ";
                cin>>n;
                if(search(node,n))
                    cout<<"Element is found"<<endl;
                else
                    cout<<"Element is not found"<<endl;
                break;
            case 3:
                cout<<"Elements in the tree are: ";
                inorder(root);
                break;
            case 4:
                cout<<"Exit sucessfully";
                break;
            default:
                cout<<"Enter a valid choice";
        }
    } 
    
    
}