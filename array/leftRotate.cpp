#include<bits/stdc++.h>
using namespace std;

void leftRotateOne(int arr[],int n)
{
    int temp = arr[0];
    for(int i = 1; i < n;i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}

void leftRotateD(int arr[],int n,int d)
{
    for(int i = 0; i < d; i++)
        leftRotateOne(arr,n);
}

//using j variable
void leftRotateD2(int arr[],int n,int d)
{
    int temp[d];
    for(int i = 0; i<d; i++)
        temp[i]=arr[i];
    for(int j=0, i=d; i < n;i++,j++)
        arr[j]=arr[i];
    for(int j=0,i=n-d;i<n;i++,j++)
        arr[i]=temp[j];
}

//without using j variable
void leftRotateD3(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0; i< d; i++)
        temp[i]=arr[i];
    for(int i=d; i < n;i++)
        arr[i-d]=arr[i];
    for(int i=0; i< d; i++)
        arr[n-d+i]=temp[i];
}

//recerse a array 
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {		
        swap(arr[high], arr[low]);
         low++;high--;
    }
}

void printArray(int arr[],int size)
{
    int i;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" "<<endl;
}


//using space O(1)
void leftRotateD4(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    printArray(arr,n);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);

}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    leftRotateD4(arr,n,2);
    cout<<"After rotation"<<endl;
    printArray(arr,n);
    

    return 0;
}