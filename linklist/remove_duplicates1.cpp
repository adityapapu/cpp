#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
    Node(int x, Node* a)
    {
        data=x;
        next=a;
    }
};

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head
    
    return 0;
}