#include<iostream>
using namespace std;
void PrintArray(float* myArray, const int& size)
{
	for (int i = 0; i < size ; i++)
	{
		cout<<myArray[i]<<endl;
	}
}
int main()
{
	float * arr=new float[10];
	float largest,sum=0;
	float lowest;

	for (int i = 0; i < 10 ; i++)
	{

		cout<<"Enter the GPA of "<<i+1<<"th student"<<endl;
		cin>>arr[i];
		sum=sum+arr[i];
	}
		largest=arr[0];
	lowest=arr[0];
	for (int i = 0; i < 10; i++)
	{
				if (arr[i]>largest)
		{
			largest=arr[i];
		}
		if (arr[i]<lowest)
		{
			lowest=arr[i];
		}
	}
	float average=sum/10;
	PrintArray(arr,10);
	cout<<"The Average is "<<average<<endl;
	cout<<"The Highest is  "<<largest<<endl;
	cout<<"The Lowest is "<<lowest<<endl;
	delete arr;

	system("pause");
	return 0;
}