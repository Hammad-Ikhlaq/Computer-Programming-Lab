#include<iostream>
using namespace std;
int main()
{
	int x=5,y=15,sum=20;
	int*xPtr=&x,*yPtr=&y,*sumPtr=&sum;
	cout<<"Enter the value of x\n";
	cin>>*xPtr;
	cout<<"Enter the value of y\n";
	cin>>*yPtr;
	*sumPtr=*xPtr+*yPtr;
	cout<<"the value of sum\n";
	cout<<*sumPtr<<endl;	
	system("pause");
	return 0;
}