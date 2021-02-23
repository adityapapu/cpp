#include<iostream>
using namespace std;

void f1(int a)
{
	int k=0;
	int prod=1;
	while(k<2)
	{
		prod*=a;
		k++;
	}
	printf("%d ",prod);
}

int main()
{
	int* p;
	int i=10;
	p=&i;
	printf("%d",*p);
	
	return 0;
}

