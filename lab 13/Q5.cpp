#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void swap(char *a, char *b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void permute(char *a, int start, int end)
{
	if (start == end)
		cout << a << endl;
	else
	{
		for (int i = start; i < end; i++)
		{
			swap(a+start, a + i);
			permute(a, start + 1, end);
			swap(a+start, a + i);
		}
	}
}

int main()
{
	char str[4] = "ABC";
	permute(str, 0, 3);
	system("pause");
	return 0;
}