#include<iostream>
using namespace std;
void InitializeMatrix(int** matrix, const int& rows, const int& cols) 
{

		for (int i = 0; i < rows; i++)
		{
		for (int j = 0; j < cols; j++)
			{
				matrix[i][j]=0;
			}
		}
}
int main()
{
	int rows,cols;
	cout<<"Enter the rows of matrix\n";
	cin>>rows;
	int**array=new int*[rows];
	cout<<"Enter the cols of matrix\n";
	cin>>cols;
	for (int i = 0; i < cols; i++)
	{
		array[i]=new int[cols];
	}
	InitializeMatrix(array, rows, cols);
	cout<<"The matrix is\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<<array[i][j];
		}
		cout<<endl;
	}
	for (int i = 0; i < rows; i++)
	{
		delete []array[i];
	}
	system("pause");
	return 0;
}