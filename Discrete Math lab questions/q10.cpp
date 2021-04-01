#include <bits/stdc++.h>
using namespace std;
 
 long factorial(int num)
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}
long permutation(int n, int r)
{
    return factorial(n) / factorial(n-r);
}

long combination(int n, int r)
{
    return permutation(n, r) / factorial(r);
}



int main(void)
{    
    int n, r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
	cout<<"Permutation= "<<permutation(n,r)<<endl;
	cout<<"Combination= "<<combination(n,r)<<endl;
    return 0; 
}

