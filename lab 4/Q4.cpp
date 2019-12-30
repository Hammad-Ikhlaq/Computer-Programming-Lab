#include<iostream>
using namespace std;
void DisplayMatrix(int** matrix, const int& rows, const int& cols) 
{
	matrix=new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i]=new int[cols];
	}
		for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j]=0;
		}
	}
	cout<<"The matrix is\n";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout<<matrix[i][j];
		}
		cout<<endl;
	}
	delete []matrix;
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
	DisplayMatrix(array, rows, cols);
	system("pause");
	return 0;
}