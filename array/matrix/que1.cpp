#include<bits/stdc++.h>
using namespace std;

void displayItem(int arr[])
{
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Items are: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void insertItem(int arr[])
{
    int item;
    cout<<"Enter the item you want to insert: ";
    cin>>item;
    int n=sizeof(arr)/sizeof(arr[0]);
    arr[n-1]=item;
}

int main()
{
    int arr[50];
        cout<<"choose a command: "<<endl;
        cout<<"1.Insert one item\n2.Display all item"<<endl;
        int choice;
        
    int exit=1;
    while(true) 
    {
    	cout<<"Enter you choice: ";
    	cin>>choice;
        switch(choice){
            case 1:
                insertItem(arr);
                cout<<"Item successfully inserted"<<endl;
                break;
            case 2:
                displayItem(arr);
                break;
            case 0:
                exit=0;
                cout<<"Thank you"<<endl;
            default:
                cout<<"Invalid choice"<<endl;
        }

    }
    
    return 0;
}
