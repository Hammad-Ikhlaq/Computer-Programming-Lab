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
	Pair()
	{
		values[0] = 0;
		values[1] = 0;
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
	template<class identifier>
	friend ostream&operator<< (ostream&out, const Pair<identifier>& p);

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
template<class T, int N>
class Sequence
{
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
};
template<typename T, int N>
void Sequence<T, N>::setmember(int x, T value)
{
	memblock[x] = value;
}
template<typename T, int N>
T Sequence<T, N>::getmember(int x)
{
	return memblock[x];
}
template<class identifier>
ostream&operator<< (ostream&out, const Pair<identifier>& p)
{
	out << p.values[0];
	out << endl;
	out << p.values[1];
	return out;
}





int main()
{
	Pair <double> y(2.23, 3.45);
	Sequence <Pair<double>, 5>myPairs;
	myPairs.setmember(0, y);
	cout << myPairs.getmember(0) << '\n';
	system("pause");
	return 0;
}

