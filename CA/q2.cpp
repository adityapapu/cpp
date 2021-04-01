//Write a Program to Find Transpose of a Matrix using array.

#include<bits/stdc++.h>
using namespace std;
const int n=4; 

void transpose(int arr[n][n])
{
    for(int i=0; i<n; i++)
        for(int j=i+1; j< n;j++)
            swap(arr[i][j], arr[j][i]);
    
}


int main()
{
    int arr[n][n]={{10,20,30,40},{50,60,70,80},{90,100,110,120},{130,140,150,160}};
    cout<<"\nBefore transpose of matrix: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }  
    cout<<"\nAfter Transpose of matrix: "<<endl;
    transpose(arr);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    } 

    
    return 0;
}
