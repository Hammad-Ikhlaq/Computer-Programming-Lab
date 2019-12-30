#include<iostream>
using namespace std;

int min(int* a, int start, int end)
{



	if (start > end)
	{

		return a[0];
	}


	if (a[end - 1] < min(a, start, end - 1))
	{
		return a[end - 1];
	}
	else
	{
		return (min(a, start, end - 1));
	}

}


int main()
{
	int start = 1; int end = 10;
	int arr[10] = { 7, 10, 3, 7, 1, 8, 3, 67, 21, 0 };
	cout << "Minimum : " << endl;
	cout << min(arr, start, end) << endl;

	system("pause");
	return 0;
}