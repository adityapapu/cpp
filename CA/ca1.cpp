#include<bits/stdc++.h>
using namespace std;

//Used a struct to create a Node
struct Node
{
    int key;
    struct Node* next;
    struct Node* prev;
    Node(int k)
    {
        key=k;
        next=prev=NULL;
    }
};

//Insert a new elements
Node *insert(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
     return head;
}

//print the list of nodes
void printlist(Node* head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->key<<" -> ";
        curr=curr->next;
    }
    cout<<"NULL";
}

//Adding 
int AlternateSum(Node* head)
{
    bool flag=true;
    int sum=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(flag)
            sum+=curr->key;
        flag=!flag;//change flag value true to false or false to true
        curr=curr->next;
    }
    return sum;
}

int main()
{   //create a empty linkedlist
    struct Node *head=NULL;
    int n,elem;
    //input the numbers of elements in the list
    cout<<"How many elements you want to insert in the list: ";
    cin>>n;
    cout<<"Please Enter "<<n<<" in to the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        head=insert(head,elem);
    }
    cout<<"Elements of linked list are: ";
    printlist(head);
    cout<<"\nSum of alternate nodes of list is: "<<AlternateSum(head);
    return 0;
}