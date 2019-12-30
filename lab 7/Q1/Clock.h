class Clock
{
	int h, m, s;
public:
	void setSecond(int);
	void setTime(int, int, int);
	int getHour();
	int getMinute();
	int getSecond();
	void printTwentyFourHourFormat();
	void printTwelveHourFormat();
	void incSec(int);
	void incMin(int );
	void incHour(int );
	void incSec();
	void incMin();
	void incHour();
	void setHour(int);
	void setMinute(int);
	void display();
	void ticksec();
	void tickmin();
	void tickhour();
	void tick();
};