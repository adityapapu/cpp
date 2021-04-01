//Write a program to implement stack as a linked list and then find the summation of alternate nodes.
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int key;
    struct Node *next;
    Node(int k)
    {
        key=k;
        next=NULL;
    }
};

//
struct MyStack
{
    Node *head=NULL;
    void push(int key)
    {
        Node *temp=new Node(key);
        temp->next=head;
        head=temp;
    }
    int pop()
    {
        if(head==NULL)
            return 0;
        int res=head->key;
        Node *temp=head;
        head=head->next;
        delete(temp);
        return res;
    }
    bool isEmpty()
    {
        return head==NULL;
    }
    int peek()
    {
        if(head==NULL)
            return -1;
        return head->key;
    }
};

//return the sum of alternate element of stack
int AlternateSum(MyStack s)
{
    bool flag=true;
    int sum=0;

    while (!s.isEmpty())
    {
        int t = s.pop();
        if(flag)
        {
            sum+=t;
        }
        flag=!flag;
    }
    return sum;
}
int main()
{
    MyStack s;//create the stack s
    int n,elem;
    cout<<"How many elements you want to insert in the list: ";
    cin>>n;
    cout<<"Please Enter "<<n<<" in to the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>elem;
        s.push(elem);
    }
    cout<<"\n Sum of all Alternate nodes of stack: "<<AlternateSum(s)<<endl;    
    return 0;
}
