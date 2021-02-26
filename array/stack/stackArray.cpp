#include <bits/stdc++.h>
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
};
bool checkPrime(int number){
	for(int i=2; i<=sqrt(number); i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

int main()
{
    MyStack s(10);
    int ch,n;
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
            if(checkPrime(n))
                s.push(n);
            else
                cout<<"Element is not prime no insert only prime no";
            break;
        case 2:
            cout<<"The top element is: "<<s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            cout<<"Sucessfully Exit";
            break;
        default:
            cout<<"Invalid choice ";
    }
    }while(ch!=4);

  
    return 0; 
}
