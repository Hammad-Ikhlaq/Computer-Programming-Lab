#include<iostream>
using namespace std;
void PrintArray(int* myArray, const int& size)
{
	for (int i = 0; i < size ; i++)
	{
		cout<<myArray[i]<<endl;
	}
}
int * GetSquares(const int &size)
{
	int * arr=new int[size];
	for (int i = 0; i < size ; i++)
	{
		arr[i]=i*i;
	}
	return arr;
}
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int * ptr=nullptr;
	ptr=GetSquares(n);
	cout<<"The Array is as: "<<endl;
	PrintArray(ptr,n);
	system("pause");
	return 0;
}