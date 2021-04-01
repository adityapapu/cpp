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
//Returns true if the given number is a Palindrome number
bool isPalindrome(int n)
{
    int reverse = 0; //to store the reverse of the given number
    int remainder = 0;

    int n1 = n; //storing the original number for comparing later
    //logic to compute the reverse of a number
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (reverse == n1)
        return true;
    else
        return false;
}

void printPlaindrome(Node *head)
{
    
    Node *curr=head;
    while(curr!=NULL)
    {
        if(isPalindrome(curr->data))
            cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(121);
    head->next->next=new Node(30);
    head->next->next->next=new Node(111); 
    head->next->next->next->next->next=new Node(50);
    cout<<"Linklist elements are: ";
    printlist(head);
    cout<<"Palindrome elements are: ";
    printPlaindrome(head);
    return 0;
}