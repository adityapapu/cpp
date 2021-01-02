#include<bits/stdc++.h>
using namespace std;

int majority(int arr[], int n)
{
    int count=0;
    for(int i = 1; i < n;i++)
    {
        for(int j = i+1; j < n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
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
    {
        if(arr[i]==arr[res])
            count++;
        
    }
    if(count>n/2)
        return arr[res];
    else
        return -1;
}

int main()
{
    int arr[]={1,2,3,4,3,3,3,,45};
    cout<<majority2(arr,8);
    return 0;
}