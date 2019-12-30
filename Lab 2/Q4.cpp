#include<iostream>
using namespace std;
int main()
{
	int i=5,j=15;
	int*xPtr=&i,*yPtr=&j;
	int*POINTER1,*POINTER2,*POINTER3;
	cout<<"the value of i\n";
	cout<<i<<endl;
	cout<<"the value of j\n";
	cout<<j<<endl;
	cout<<"the address of xPtr\n";
	cout<<xPtr<<endl;
	cout<<"the address of yPtr\n";
	cout<<yPtr<<endl;
	xPtr ++;  yPtr ++; 
	cout<<"the address of xPtr\n";
	cout<<xPtr<<endl;
	cout<<"the address of yPtr\n";
	cout<<yPtr<<endl;
	xPtr --; yPtr --; 
	cout<<"the address of xPtr\n";
	cout<<xPtr<<endl;
	cout<<"the address of yPtr\n";
	cout<<yPtr<<endl;	
	xPtr = xPtr + 3; yPtr = yPtr + 4;
	cout<<"the address of xPtr\n";
	cout<<xPtr<<endl;
	cout<<"the address of yPtr\n";
	cout<<yPtr<<endl;	
	system("pause");
	return 0;
}