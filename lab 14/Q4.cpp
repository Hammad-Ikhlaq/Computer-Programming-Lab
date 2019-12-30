#include<iostream>
using namespace std;
template<class T, int N>
class Sequence
{
	T memblock[N];
public:
	void setmember(int x, T value);
	T getmember(int x);
};
template<typename T, int N>
void Sequence<T,N>::setmember(int x, T value)
{
	memblock[x] = value;
}
template<typename T, int N>
T Sequence<T, N>::getmember(int x)
{
	return memblock[x];
}


int main()
{
	Sequence <int, 5>myints;
	Sequence <double, 5>myfloats;
	myints.setmember(0, 100);
	myfloats.setmember(3, 3.1416);
	cout << myints.getmember(0) << '\n';
	cout << myfloats.getmember(3) << '\n';
	system("pause");
	return 0;
}

