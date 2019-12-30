#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main()
{
	char charToFind=0,charToReplace;
	char*myStr =new char[100];
	cout << "Enter sentence\n";
	gets(myStr);
	cout << "Enter find character\n";
	cin.get(charToFind);
	cout << "Enter replace character\n";
	cin >> charToReplace;
	for (int i = 0; myStr[i] != '\0'; i++)
	{
		if (myStr[i] == charToFind)
		{
			myStr[i] = charToReplace;
		}
	}
	cout << myStr<<endl;
	system("pause");
	return 0;
}
