#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(30);
    for(int x:s)
        cout<<x<<" ";
    cout<<s.size();
    return 0;
}