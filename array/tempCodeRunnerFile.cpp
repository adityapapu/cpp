#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size)
{
    int i;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" "<<endl;
}
int search(int arr[],int n, int x)
{
    int pos=-1;
    for(int i=0;i<n;i++)
        if(x==arr[i])
            pos=i;
    return pos;
}
int main()
{
    int n,x;
    cout<<"How many element you want to insert?";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0; i< n; i++)
        cin>>arr[i];
    printArray(arr,n);

    cout<<"Enter the number you want to search:";
    cin>>x;
    cout<<"Number is found at position: "<<search(arr,n,x);
        
    return 0;
}