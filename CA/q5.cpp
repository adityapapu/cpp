#include <iostream>
using namespace std;

int main()
{
    int m1,n,m2;
    cout<<"Enter the row of first array : ";
    cin>>m1;
    cout<<"Enter the column of first array : ";
    cin>>n;
    cout<<"Enter the row of second array : ";
    cin>>m2;
    cout<<"\nAssuming the same column size for second array too in order to merge.";

    int arr1[m1][n],arr2[m2][n],arrMerged[m1+m2][n];
    cout<<"\nFill the first 2D array of size "<<m1<<" X "<<n<<endl;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter element  : ";
            cin>>arr1[i][j];
            arrMerged[i][j]=arr1[i][j];
        }
    }
    cout<<"\nFill the second 2D array of size "<<m2<<" X "<<n<<endl;
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter element  : ";
            cin>>arr2[i][j];
            arrMerged[i+m1][j]=arr2[i][j];
        }
    }
    cout<<"Printing array elements after merging.\n";
    for(int i=0;i<m1+m2;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arrMerged[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
