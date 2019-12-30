#include<iostream>
using namespace std;
int main()
{
	int a=1;
	float b=2.5;
	double c=2.575647;
	int*aa=&a;
	float*ab=&b;
	double*ac=&c;
	cout<<"Values of addresses are\n";	
	cout<<aa<<endl;
	cout<<ab<<endl;
	cout<<ac<<endl;

	cout<<"Values of variables are\n";
	cout<<*aa<<endl;
	cout<<*ab<<endl;
	cout<<*ac<<endl;
	*aa=6;
	*ab=11.5;
	*ac=5.7646;
	cout<<"New Values of variables are\n";
	cout<<*aa<<endl;
	cout<<*ab<<endl;
	cout<<*ac<<endl;
	system("pause");
	return 0;
}