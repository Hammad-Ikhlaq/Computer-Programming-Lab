#include<iostream>
using namespace std;
void SWAP(int*&a,int*&b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int x=5,y=10;
	int*p=&x,*q=&y;
	SWAP(p,q);
	cout<<"The address of x is\n"<<p<<endl;
	cout<<"The value of x is\n"<<*q<<endl;
	cout<<"The value of p is\n"<<p<<endl;
	cout<<"The value of *p is\n"<<*p<<endl;
	cout<<"The address of y is\n"<<q<<endl;
	cout<<"The value of y is\n"<<*p<<endl;
	cout<<"The value of q is\n"<<q<<endl;
	cout<<"The value of *q is\n"<<*q<<endl;
	cout<<"The address of p is\n"<<&x<<endl;
	cout<<"The address of q is\n"<<&y<<endl;
	system("pause");
	return 0;
}