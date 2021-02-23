#include<bits/stdc++.h>
using namespace std;

class Node { 
public: 
    int data; 
    Node* next; 
    Node(int d) 
    {
		data = d;
		next=NULL;
	} 
}; 

Node *ibegin(Node * head, int n)
{
	if(head==NULL)
	{
		Node* temp= new Node(n);
		return temp;
	}
    Node *temp=new Node(n);
    temp->next=head;
    return temp;
}
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
void printlist(Node* head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"null";
}
int main()
{
    Node *head;
    int ch,n;
    
    do
    {
    	cout<<endl<<"##################"<<endl;
        cout<<"Select a opetion: "<<endl;
        cout<<"1.Insert at beginning of list"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter your choice: ";
        
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter a number"<<endl;
                cin>>n;
                head=insertEnd(head,n);
                break;
            case 2:
                cout<<"List elements are: "<<endl;
                printlist(head);
                cout<<endl;
                break;
            case 3:
                cout<<"Sucessfully Exit";
                break;
            default:
                cout<<"You have enter a invalid choice"<<endl;
        }

    }while(ch!=3);
    


}
