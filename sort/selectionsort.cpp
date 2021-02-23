#include<bits/stdc++.h>
using namespace std;

void swap(int *xp,int *yp)
{  
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}


void printArray(int arr[],int size)
{
    int i;
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" "<<endl;
}
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
            if(arr[i]<arr[min_index])
                min_index=j;
            swap(&arr[min_index],&arr[i]);
    }
    printArray(arr,n);
}

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
            
}

void bubbleSort2(int arr[],int n)
{
    bool swaped;
    for(int i=0;i<n-1;i++)
    {
        swaped = false;
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swaped=true;
            }
        if(swaped==false)
            break;
    }
}

void insertionSort(int arr[], int n)
{
    for(int i=1;i< n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[]={11,20,22,23,24,25,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout<<"Sorted array: \n";
    printArray(arr,n);
    
    return 0;
}