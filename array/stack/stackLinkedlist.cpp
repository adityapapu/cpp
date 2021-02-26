#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct MyStack{
    Node *head;//crating empty linked list
    int sz;
    MyStack()
    {
        head=NULL;
        sz=0;
    }
    //insert the element at the beginning of linked list
    void push(int x){
      
        Node *temp=new Node(x);
        temp->next=head;
        head=temp;
        sz++;
        cout<<"Sucessfully Inserted"<<endl;
    }
    //remove the element from the beginning of linked list
    int pop(){
        if(head==NULL)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        sz--;
        return res;
    }
    //traverse the elements of linked list
    void display()
    {
        if(head==NULL)
        {
            cout<<"Stack is Empty"<<endl;
        }
        else
        {
            cout<<"Stack elements are: ";
            Node *curr=head;
            while(curr!=NULL)
            {
                cout<<curr->data<<" ";
                curr=curr->next;
            }
            cout<<endl;
        }
}
    
};

//function to check number is prime or not
bool checkPrime(int number){
    //0 and 1 are not prime numbers
    if(number<2)
        return false;
	for(int i=2; i<=sqrt(number); i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

int main()
{
    MyStack s;
    int ch,n;//ch:choice
    do
    {
    cout<<"\n################################\n";
    cout<<"Select your choice"<<endl;
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
    cout<<"Enter the choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter ther element: ";
            cin>>n;
            //checking n is prime or not 
            if(checkPrime(n))
                s.push(n);
            else
                cout<<"Element is not prime no insert only prime number";
            break;
        case 2:
            //Poping the top element from the stack
            cout<<"The top element is: "<<s.pop();
            break;
        case 3:
            //Display the stack elements
            s.display();
            break;
        case 4:
            //Exit form the program
            cout<<"Sucessfully Exit";
            break;
        default:
        
            cout<<"Invalid choice ";
    }
    }while(ch!=4);

  
    return 0; 
}
