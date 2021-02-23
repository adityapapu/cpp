#include <iostream>
using namespace std;
int num[5];
int i,x,n;
void addItem()
{
cout<<"Enter array elements"<<endl;
for(i=0;i<5;i++)
{
cin>>num[i];

}
}
void displayItem()
{
cout<<"Array Elements are:"<<endl;
for(i=0;i<5;i++)
{
cout<<num[i]<<" ";

}
}

void findArray()
{	
int counter=0;
int pos,item;
cout<<"\n Enter Element to be Searched : ";
cin>>item;
for(i=0; i<5; i++)
{
if(num[i]==item)
{
counter=1;
pos=i+1;
break;
}
}
if(counter==0)
{
cout<<"\n Element Not Found..!!";
}
else
{
cout<<"\n Element "<<item<<" Found At Position "<<pos;
}
}

void insertelement(int arr[], int n, int x, int pos)
{
	
	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		num[i + 1] = num[i];
	}

	num[idx] = x;
}
int main()
{
int ch;
do{
cout<<"\nSelect your choice"<<endl;
cout<<"1.Create Array"<<endl;
cout<<"2.Display Items"<<endl;
cout<<"3. Find Array elements"<<endl;
cin>>ch;
switch(ch)
{
case 1:
addItem();
break;
case 2:
displayItem();
break;
case 3:
findArray();
break;
case 4:
insertelement(int arr[], int n, int x, int pos)
break;
default:
cout<<"Invalid Choice"<<endl;
break;
}
}while(ch!=3);
return 0;
}#include <iostream>
using namespace std;
int num[5];
int i,x,n;
void addItem()
{
cout<<"Enter array elements"<<endl;
for(i=0;i<5;i++)
{
cin>>num[i];

}
}
void displayItem()
{
cout<<"Array Elements are:"<<endl;
for(i=0;i<5;i++)
{
cout<<num[i]<<" ";

}
}

void findArray()
{	
int counter=0;
int pos,item;
cout<<"\n Enter Element to be Searched : ";
cin>>item;
for(i=0; i<5; i++)
{
if(num[i]==item)
{
counter=1;
pos=i+1;
break;
}
}
if(counter==0)
{
cout<<"\n Element Not Found..!!";
}
else
{
cout<<"\n Element "<<item<<" Found At Position "<<pos;
}
}

void insertelement(int arr[], int n, int x, int pos)
{
	
	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		num[i + 1] = num[i];
	}

	num[idx] = x;
}
int main()
{
int ch;
do{
cout<<"\nSelect your choice"<<endl;
cout<<"1.Create Array"<<endl;
cout<<"2.Display Items"<<endl;
cout<<"3. Find Array elements"<<endl;
cin>>ch;
switch(ch)
{
case 1:
addItem();
break;
case 2:
displayItem();
break;
case 3:
findArray();
break;
case 4:
insertelement(int arr[], int n, int x, int pos)
break;
default:
cout<<"Invalid Choice"<<endl;
break;
}
}while(ch!=3);
return 0;
}
