#include<bits/stdc++.h>
using namespace std;

//creating node structure
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

//print the list of nodes
void printlist(Node* head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

//recursive printing the list 
void rprint(Node* head)
{
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    rprint(head->next);
}

//insert at beginning of list
Node *ibegin(Node * head, int n)
{
    Node *temp=new Node(n);
    temp->next=head;
    return temp;
}


//insert at end of list
Node *insertEnd(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
    
}
Node *dbegin(Node *head)
{
    if(head==NULL)
        return head;
    else
    {
        Node *temp=head->next;
        delete head;
        return temp;
    }
    
}

Node *SortedInsert(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;
    if(head->data>x)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL && curr->next->data<x)
    {
        curr=curr->next;
        cout<<curr->data<<endl;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

Node *insertpos(Node *head,int pos,int x)
{
	Node *temp=new Node(x);
    if(pos==1)
    {
    	temp->next=head;
    	return temp;
	}
	Node *curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)
    	curr=curr->next;
    if(curr==NULL)
    	return head;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int getCount(struct Node* head){
    if(head==NULL)
        return 0;
    Node *curr=head;
    if(curr->next==NULL)
    {
        return 1;
    }
    int i;
    for(i=1;curr->next!=NULL;i++)
    	curr=curr->next;
    return i;
}
Node* insertInMiddle(Node* head, int x)
{
	Node *temp=new Node(x);
	Node *slow=head, *fast=head->next;
	while(fast!=NULL && fast->next!=NULL)
	{
	    slow=slow->next;
	    fast=fast->next->next;
	}
	temp->next=slow->next;
	slow->next=temp;
	return head;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);        
    head=ibegin(head,10);
    head=insertEnd(head,50);
    head=insertEnd(head,60);
    head=dbegin(head);
    rprint(head);
    cout<<endl;

    //sorted insert example
     head=SortedInsert(head,15);
     rprint(head);

    //insert at pos of list
    cout<<endl<<"Insert at given pos"<<endl;
    head=insertpos(head,2,12);
    rprint(head);
    
    //count
    cout<<getCount(head);
    
    return 0;
}
