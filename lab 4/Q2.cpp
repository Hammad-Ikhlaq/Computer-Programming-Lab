#include<iostream>
using namespace std;
int** AllocateMemory(int& rows, int& cols)
{
	int**arr=new int*[cols];
	for (int i = 0; i < cols; i++)
	{
		arr[i]=new int[rows];
	}

	return arr;
}
int main()
{
		int rows,cols;
	cout<<"Enter the rows of matrix\n";
	cin>>rows;
	int**array;
	cout<<"Enter the cols of matrix\n";
	cin>>cols;
	array= AllocateMemory(rows, cols);
	cout<<"The address is\n";
	cout<<array<<endl;
	delete []array;
	system("pause");
	return 0;
}