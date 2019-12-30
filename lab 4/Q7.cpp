#include<iostream>
using namespace std;
int*getDivisors(int x, int&nodiv)
{
	int d = 1, count = 2;
	for (; d <= x / 2; d++)
	{
		if (x%d == 0)
		{
			count++;
		}
	}
	int*divs = new int[count];
	nodiv = count - 1;
	divs[0] = 1;
	divs[count - 1] = -1;
	divs[count - 2] = x;
	int i = 1;
	for (d = 2; d <= x / 2; d++)
	{
		if (x%d == 0)
		{
			divs[i++] = d;
		}
	}
	return divs;
}
int**getDivtilln(int n, int&nodiv)
{
	int**arr = nullptr;
	if (n>0)
	{
		arr = new int*[n + 1];
		arr[0] = nullptr;
		for (int i = 1; i <= n; i++)
		{
			arr[i] = getDivisors(i, nodiv);
		}
	}
	return arr;
}
int main()
{
	int rows = 0, cols, nodiv;
	cout << "Enter the number between 6 and 100\n";
	cin >> rows;
	while (rows >= 100 && rows <= 6)
	{
		if (rows >= 100 && rows <= 6)
		{
			cout << "Wrong input. Please re-enter the number\n";
		}
		cin >> rows;
	}
	int flag = 0;
	int**array = new int*[rows];
	array = getDivtilln(rows, nodiv);
	for (int i = rows; i <= rows; i++)
	{
		cout << "factors of " << i << " are ";
		flag = 0;
		for (int j = 0; j < i; j++)
		{
			if (array[i][j] == -1)
				flag = 1;
			if (array[i][j] != -1 && flag == 0)
			{
				cout << array[i][j] << ",";
			}

		}
		cout << endl;
	}
	system("pause");
	return 0;
}