#include<iostream>
using namespace std;
template <typename T>
class Pair
{
private:
	T values[2];
public:
	Pair(T a, T b)
	{
		values[0] = a;
		values[1] = b;
	}
	T GetMax(T a, T b)
	{
		if (a >= b)
		{
			return a;
		}
		else
			return b;
	}
	T GetMin();
};
template<typename P>
P Pair<P>::GetMin()
{
	if (values[0] >= values[1])
	{
		return values[1];
	}
	else
		return values[0];
}
int main()
{
	Pair <double>myobject(1.012, 1.01234);
	cout << myobject.GetMin();
	system("pause");
	return 0;
}