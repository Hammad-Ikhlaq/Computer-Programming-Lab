#include<iostream>
using namespace std;

void listNumber(int start, int end)
{
	if (start > end)
	{
		exit;
	}
	else
	{
		cout << start << endl;
		listNumber(start + 1, end);
	}
}

void Numberslistdec(int start, int end)
{
	if (end < start)
	{
		exit;
	}
	else
	{
		cout << end << endl;
		Numberslistdec(start, end - 1);
	}

}
int main()
{
	int start = 0;
	int end = 10;
	cout << "Numbers : " << endl;
	listNumber(start, end);
	cout << "Ascending : " << endl;
	listNumber(start, end);
	cout << "Descending : " << endl;
	Numberslistdec(start, end);

	system("pause");
	return 0;
}