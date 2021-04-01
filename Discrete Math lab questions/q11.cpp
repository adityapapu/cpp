#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int number){
	for(int i=2; i<=sqrt(number); i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (checkPrime(n))
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";

    return 0;
}