#include<iostream>
#include"Clock.h";
using namespace std;
void Clock::setMinute(int min)
{
	m = min%60;
}
void Clock::setSecond(int sec)
{
	s = sec%60;
}
void Clock::setHour(int hr)
{
	h = hr%24;
}
void Clock::setTime(int hr, int min, int sec)
{
	h = hr%24;
	m = min%60;
	s = sec%60;
}
int Clock::getHour()
{
	int i = 0;
	cout << "Enter the second\n";
	cin >> i;
	while (i >= 24 && i < 1)
	{
		if (i >= 24 && i < 1)
		{
			cout << "Enter the hours between 0 and 24\n";
		}
		cin >> i;
	}
	h = i;
	return h;
}
int Clock::getMinute()
{
	int i = 0;
	cout << "Enter the second\n";
	cin >> i;
	while (i >= 24 && i < 1)
	{
		if (i >= 24 && i < 1)
		{
			cout << "Enter the hours between 0 and 24\n";
		}
		cin >> i;
	}
	m = i;
	return h;
}
int Clock::getSecond()
{
	int i = 0;
	cout << "Enter the second\n";
	cin >> i;
	while (i >= 24 && i < 1)
	{
		if (i >= 24 && i < 1)
		{
			cout << "Enter the hours between 0 and 24\n";
		}
		cin >> i;
	}
	s = i;
	return i;
}
void Clock::printTwentyFourHourFormat()
{
	cout << h << ":" << m << ":" << s;
}
void Clock::printTwelveHourFormat()
{
	cout << h%12 << ":" << m << ":" << s;
}
void Clock::incSec(int i)
{
	if (i == 1)
	{
		if (s < 59)
		{
			s++;
		}
		else
		{
			s = 0;
			incMin();
		}
	}
	else
	{
		if ((s+i)<60)
		{
			s = s + i;
		}
		else
		{
			s = (s + i) % 60;
			incMin();
		}
	}
}
void Clock::incMin(int i)
{
	if (i == 1)
	{
		if (m < 59)
		{
			m++;
		}
		else
		{
			m = 0;
			incMin();
		}
	}
	else
	{
		if ((m + i)<60)
		{
			m = m + i;
		}
		else
		{
			m = (m + i) % 60;
			incMin();
		}
	}
}
void Clock::incHour(int i)
{
	if (i == 1)
	{
		h = (h + 1) % 24;
	}
	else
	{
		h = (h + i) % 24;
	}
}
void Clock::incSec()
{

		if (s < 59)
		{
			s++;
		}
		else
		{
			s = 0;
			incMin();
		}
}
void Clock::incMin()
{
		if (m < 59)
		{
			m++;
		}
		else
		{
			m = 0;
			incMin();
		}
}
void Clock::incHour()
{
		h = (h + 1) % 24;
}