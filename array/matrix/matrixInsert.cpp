#include<bits/stdc++.h>
using namespace std;

void method1()
{
    int r,c;
    cout<<"Enter the row and column numbers:"<<endl;
    // cin>>r>>c;
    r=5,c=3;
    int **arr;
    arr=new int*[r];
    
    for(int i=0;i<r;i++)
        arr[i]=new int[c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void method2()
{
    int r=3,c=2;
    vector<int> arr[r];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            arr[i].push_back(10);
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout << arr[i][j]<<" ";
        cout<<endl;
        
    }


}


int main()
{
    method2();
    return 0;
}