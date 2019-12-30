#include<iostream>
using namespace std;
int*maxCol(int** matrix, const int& rows, const int& cols) 
{
	int*ans=new int[cols];
		int largest;
		for (int j = 0; j < cols; j++)
		{
			largest=0;
			for (int i = 0; i < rows; i++)
			{
					if (largest<matrix[i][j])
						{
							largest=matrix[i][j];
						}
					ans[j]=largest;
			}
		}
	for (int i = 0; i < cols; i++)
	{
		delete []matrix[i];
	}
	delete []matrix;
		return ans;
	}

int main()
{
	int rows,cols;
	cout<<"Enter the rows of matrix\n";
	cin>>rows;
	int**array=new int*[rows];
	cout<<"Enter the cols of matrix\n";
	cin>>cols;
	int*answer = new int[cols];
	for (int i = 0; i < cols; i++)
	{
		array[i]=new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin>>array[i][j];
		}
		cout << endl;
	}
	answer=maxCol(array, rows, cols);
	cout<<"The matrix is\n";
	for (int i = 0; i < cols; i++)
	{
		cout<<answer[i];
	}
	
	system("pause");
	return 0;
}