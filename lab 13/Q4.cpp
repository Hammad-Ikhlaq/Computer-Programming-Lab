#include<iostream>
using namespace std;

int binarySearch(int* arr, int left, int right,int key)
{
	if (right < left)
	{
		return -1;
	}
	else
	{
		int mid = (left + right) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			return binarySearch(arr, mid + 1, right, key);
		}
		else
		{
			return binarySearch(arr, left, mid - 1, key);
		}
	}
}

int main()
{
	int a[10] = { 12, 23, 34, 45, 56, 67, 78, 89, 90, 100 };
	cout << "Find at index" << endl;
	cout<<binarySearch(a, 0, 10, 90);
	cout << endl;
	system("pause");
	return 0;
}