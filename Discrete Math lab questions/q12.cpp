#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate distance
float distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
 
int main()
{
	int x1,x2,y1,y2;
	
	//user inputs the points
	cout << "Enter x1:";    
	cin >> x1;
	cout << "Enter y1:";
	cin >> y1;
	cout << "Enter x2:";
	cin >> x2;
	cout << "Enter y2:";
	cin >> y2;
	
    cout <<endl<<"Distance: "<< distance(x1,y1,x2,y2);
    return 0;
}