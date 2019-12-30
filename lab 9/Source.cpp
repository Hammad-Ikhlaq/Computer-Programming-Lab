#include<iostream>
#include"Header.h"
using namespace std;
int main()
{
	MyClass S1;
	int arr1[3] = { 1, 2, 3 };
	int arr2[3] = { 1,2,3 };
	MyClass S2(arr1, 3), S3(arr2, 3);
	MyClass S5;
	MyClass S99;
	S99 = S2 -S3;
	//S2 = -S2;
	//cin >> S5>>S1;
	//cout << S99;
	//S99 = S99 - 4;
	cout << S99 << endl;
	//if (S1==S5)
	//{
	//	cout << "Hurrah\n";
	//}
	system("pause");
	return 0;
}