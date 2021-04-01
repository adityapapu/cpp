#include <bits/stdc++.h>
using namespace std;
 
 
class stackNode { 
//class for each node which is a single stack element
  public:
    int data;
    stackNode *next;
    stackNode(int a) { //constructor
        data = a;
        next = NULL;
    }
};
 
stackNode *top=NULL; //top of stack initialized to NULL
int size=0;// size of stack initialized to 0
 
 
void push(int x) { //push operation
 
    stackNode* node=(stackNode*)(malloc(sizeof(stackNode)));
    node->data=x;
    node->next=top;
    top=node;
    cout<<x<<" is pushed\n";
    size++;
}
 
bool isEmpty(){ //isEmpty function
  if(top==NULL && size==0)
  return true;
  else
  return false;
}
 
int pop() { //pop operation
 
    if(isEmpty()){
      cout<<"stack is empty\n";
      return INT_MIN;
    }
    else{
        size--;
        int temp=top->data;
        stackNode* tempNode=top;
        top=top->next;
        free(tempNode);
        return temp;
    }
}
 
int top_stack(){ //top() operation
  if(isEmpty()){
    cout<<"stack is empty\n";
    return INT_MIN;
  }
  else{
    return top->data;
  }
 
}
int sum()
{
    int sum=0;
    stackNode *curr=top;
    while(curr!=NULL)
    {
        sum+=curr->data;
        curr=curr->next;
    }
    return sum;

}
 
//main function
int main()
{
    push(5);
    push(1);
    push(11);
    push(23);
    push(43);
    push(53);
    cout<<"Sum of all the elements nodes: "<<sum();
    return 0;
}