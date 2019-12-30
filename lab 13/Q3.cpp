#include<iostream>
using namespace std;

int mul(int a, int b)
{
	if (b == 1)
	{
		return a;
	}
	else
	{
		return a + mul(a, b - 1);
	}

}
int main()
{
	int a = 7;
	int b = 4;
	cout << mul(a, b) << endl;
	system("pause");
	return 0;
}