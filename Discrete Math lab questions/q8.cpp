#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
   if(b==0)
      return a;
    return gcd(b, a % b);
}
int main()
{
   int a, b;

   cout << "Enter two positive integers: ";
   cin >> a >> b;

   cout << "GCD of " << a << " & " <<  b << " is: " << gcd(a, b);

   return 0;
}
