#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={10,20,5,7};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<endl;
    }
    for(int x:v){
        cout<<x<<endl;
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int x)
        cout<<x<<endl;
    
    return 0;
}