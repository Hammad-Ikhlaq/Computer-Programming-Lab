#include<iostream>
using namespace std;
void input(int a[],int size)
{
	for (int i = 0; i < size; i++)
	{
		cin>>a[i];
	}
}
void findLargest(int a[],int size)
{
	int largest=a[0];
	int largestIndex=0;
	for (int i = 0; i < size; i++)
	{
		if (largest<a[i])
		{
			largest=a[i];
			largestIndex=i;
		}
	}
		cout<<"largest element is "<<largest<<endl;
}
int main()
{
	int A[5]={0};
	cout<<"Input values\n";
	input(A,5);
	findLargest(A,5);
	system("pause");
	return 0;
}