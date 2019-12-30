#include<iostream>
#include<time.h>
#include<windows.h>
#include"Clock.h";
using namespace std;
int main()
{
	Clock c;
	int a, b, d;
	//c.setTime(7, 8, 9);
	//c.setHour(5);
	//c.setMinute(6);
	//c.setSecond(7);
	a=c.getHour();
	b=c.getMinute();
	d=c.getSecond();
	while (true)
	{

		c.printTwentyFourHourFormat();
		cout << endl;
		c.incSec();
		c.incMin();
		c.incHour();
		Sleep(100);
	}
	system("pause");
	return 0;
}