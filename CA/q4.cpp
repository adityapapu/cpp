

#include<bits/stdc++.h>
using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap=c;
        arr=new int [cap];
        top=-1;
    }
    
    void push(int x){
        if(top==cap-1)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
        cout<<"Sucessfully Inserted"<<endl;
    }
    
    int pop(){
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        int res=arr[top];
        top--;
        return res;
    }
    
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    
    int size()
    {
        return (top+1);
    }
    
    bool isEmpty()
    {
        return top==-1;
    }
    void display()
    {
        if(top==-1)
            cout<<"Stack is empty"<<endl;
        else
        {
            cout<<"Elements of stack are: ";
            for(int i=0;i<=top;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    int sum()
    {
        int  s = 0;
        if(top==-1)
            return 0;
        else
        {
            for(int i=0;i<=top;i++)
            {
                s+=arr[i];
            }
        }
        return s;
    }
};


int main()
{
    
    int size;
    cout<<"Enter the size of the stack: ";
    cin>>size;
    MyStack s(size);
    int ch,n;
    do
    {
    cout<<"\n################################\n";
    cout<<"Select your choice"<<endl;
    cout<<"1.Push\n2.Pop\n3.Display\n4.Display the Stack all element sum\n5.Exit"<<endl;
    cout<<"Enter the choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter ther element: ";
            cin>>n;
             s.push(n);
            break;
        case 2:
            cout<<"The top element is: "<<s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout<<"Sum of the stack: "<<s.sum()<<endl;
            break;
        case 5:
            cout<<"Sucessfully Exit";
            break;
        default:
            cout<<"Invalid choice ";
    }
    }while(ch!=5);

  
    return 0; 
}