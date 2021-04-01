#include<bits/stdc++.h>
using namespace std;

int insert(int arr[], int size, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 

int main()
{
    int arr[capacity]={1,2,3,4,5};
    cout<<"Ara";
    
    int n,pos;
    cout<<"Enter the element you want to insert: ";
    cin>>n;
    cout<<"Enter the position where you want to insert";
    cin>>pos;
    insert(arr,5,n,pos);
    return 0;
}