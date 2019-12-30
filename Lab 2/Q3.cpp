#include<iostream>
using namespace std;
int main()
{
	int Sum1,Sum2;
	int A,B;
	int*POINTER1,*POINTER2,*POINTER3;
	cout<<"Enter the value of A\n";
	cin>>A;
	cout<<"Enter the value of B\n";
	cin>>B;
	POINTER1=&A;
	POINTER2=&B;
	Sum1=(*POINTER2)-(*POINTER1);
	POINTER3=POINTER1;
	POINTER1=POINTER2;
	POINTER2=POINTER3;
	Sum2=(*POINTER2)-(*POINTER1);
	cout<<"Sum of variables is =" <<(Sum1+Sum2)<<endl;
	system("pause");
	return 0;
}