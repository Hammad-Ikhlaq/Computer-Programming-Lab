#include<iostream>
using namespace std;
template <typename T,typename P>
T GetMax(T a, P b)
{
	if (a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
};
template <typename T,typename P>
T GetMin(T a, P b)
{
	if (a <= b)
	{
		return a;
	}
	else
	{
		return b;
	}
};

	int main()
	{
		char i = 'Z';
		int  j = 6, k;
		long l = 10, m = 5, n;
		k = GetMax(i, m);
		n = GetMin(j, l);
		cout << k << endl;
		cout << n << endl;
		system("pause");
		return 0;
	}
