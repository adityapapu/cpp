#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={10,15,40,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int x:arr)
        cout<<x<<endl; 
    sort(arr,arr+n,greater<int>());
    cout<<endl;
    for(int x:arr)
        cout<<x<<endl;
    return 0;
}