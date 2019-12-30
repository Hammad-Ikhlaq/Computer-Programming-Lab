#include<iostream>
#include<fstream>
using namespace std;
class MyClass
{
private:
	int*arr;
	int size;
public:
	friend ostream & operator<<(ostream & out, const MyClass & obj)
	{
		out<<"{";
		for(int i=0; i<obj.size;i++)
			out<<obj.arr[i]<<",";
		out<<"}";
		return out;
	}
	friend istream & operator>>(istream & in,  MyClass & obj)
	{
		in>>obj.size;
		obj.arr = new int[obj.size];
		for (int i = 0; i<obj.size; i++)
			in >> obj.arr[i] ;
		return in;
	}
	MyClass() //Default constructor
	{
		arr = NULL;
		size = 0;
	}
	~MyClass()		//Destructor!
	{
		if (arr != NULL)
		{

			delete[]arr;
		}
	}
	MyClass(int*ptr, int n)
	{
		size = n;
		arr = new int[size];
		for (int i = 0; i<n; i++)
			arr[i] = ptr[i];
	}
	const MyClass & operator=(const MyClass & obj)
	{
		if (arr!=NULL)
		{
			delete[]arr;
		}
		arr = new int[obj.size];
		size = obj.size;
		for (int i = 0; i < size ; i++)
		{
			arr[i] = obj.arr[i];
		}
		return *this;
	}
	bool operator==(const MyClass&obj)
	{
		if (size != obj.size)
			return false;
		for (int i = 0; i<size; i++)
		if (arr[i] != obj.arr[i])
			return false;
		return true;
	}
	MyClass operator+(MyClass obj)
	{
		MyClass temp;
		temp.arr = new int[obj.size + size];
		for (int i = 0; i<size; i++)
		{
			temp.arr[i] = arr[i];
		}
		for (int i = size, j = 0; i<obj.size + size; j++, i++)
		{
			temp.arr[i] = obj.arr[j];
		}
		temp.size = obj.size + size;
		return temp;
	}
	MyClass(const MyClass & obj) //copy constructor
	{
		arr = NULL;
		*this = obj;
	}
	MyClass operator+(int obj)
	{
		MyClass temp;
		temp.arr = new int[size + 1];
		temp.size = 1 + size;
		for (int i = 0; i<size; i++)
		{
			temp.arr[i] = arr[i];
		}
		temp.arr[size] = obj;
		return temp;
	}
	MyClass operator-(int obj)
	{
		int count=0;
		for (int i = 0; i < size; i++)
		{
			if (obj != arr[i])
			{
				count++;
			}
		}
		MyClass temp;
		temp.size = count;
		temp.arr = new int[count];
		int j = 0;
		for (int i = 0; i<size; i++)
		{
			if (obj != arr[i])
			{
				temp.arr[j] = arr[i];
				j++;
			}
		}
		return temp;
	}
	MyClass operator-()//unary operator
	{
		MyClass temp;
		temp.size = size;
		temp.arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			temp.arr[i] = arr[i]*-1;
		}
		return temp;
	}
	MyClass operator-(MyClass obj)
	{
		MyClass temp;
		temp.size = size;
		temp.arr = new int[temp.size];
		for (int i = 0; i < size; i++)
		{
			temp.arr[i] = arr[i];
		}
		for (int i = 0; i < temp.size; i++)
		{
			for (int j = 0; j < obj.size; j++)
			{
				if (temp.arr[i] == obj.arr[j])
				{
					for (int k = i; k < temp.size-1; k++)
					{
						temp.arr[k] = temp.arr[k + 1];
					}
					temp.size = temp.size - 1;
				}
			}
		}
		return temp;
	}
};
