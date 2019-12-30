#include<iostream>
using namespace std;
template <class T>
class Container
{
	T data;
public:
	Container(T a)
	{
		data = a;
	}
	T increase()
	{
		data += 1;
		return data;
	}
};

template<>
class Container<char>
{
	char data;
public:
	Container(char a)
	{
		data = a;
	}
	char uppercase()
	{
		data -=32;
		return data;
	}
};


int main()
{
	Container<int>myint(7);
	Container<char>mychar('j');
	cout << myint.increase() << endl;
	cout << mychar.uppercase() << endl;
	system("pause");
	return 0;
}

