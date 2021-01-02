//Majority element is an element that appears more than n/2 times in an array of size n.

#include<bits/stdc++.h>
using namespace std;

int majority(int arr[], int n)
{
    int count=0;
    for(int i = 1; i < n;i++)
    {
        for(int j = i+1; j < n;j++)
            if(arr[i]==arr[j])
                count++;
        if(count>n/2)
            return arr[i];
    }
    return -1;
}

int majority2(int arr[], int n)
{
    int count=1,res=0;
    for(int i = 1; i < n;i++)
    {
        if(arr[i]==arr[res])
            count++;
        else
            count--;
        if(count==0)
            count=1,res=i;   
    }
    count=0;
    for(int i = 0; i < n;i++)
        if(arr[i]==arr[res])
            count++;
        
    if(count>n/2)
        return arr[res];
    else
        return -1;
}

int main()
{
    int arr[]={1,2,3,3,3,4,3,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majority(arr,n)<<endl;
    cout<<majority2(arr,n)<<endl;
    return 0;
}