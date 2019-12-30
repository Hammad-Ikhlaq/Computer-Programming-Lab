#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
protected:
	int tax;
public:
	virtual void ComputeTax() = 0;
	virtual void PrintVehicle() = 0;
};
class HTV : public Vehicle
{
protected:

	int FixTax;

public:
};
class LTV : public Vehicle
{
protected:
	int cc;
public:
};
class Car : public LTV
{
private:
	string makers;
	int yearModel;
	string name;
public:
	void PrintVehicle()
	{
		cout << name << " of " << makers;
	}
	void ComputeTax()
	{
		if (cc <= 1000)
		{
			tax = 500;
			cout << "Tax is 500\n";
		}
		else if (1000<cc <= 2000)
		{
			tax = 2000;
			cout << " Tax is 2000\n";
		}
		else
		{
			tax = 3500;
			cout << " Tax is 3500\n";
		}
	}
	Car(string m, int y, string n, int CC)
	{
		makers = m;
		yearModel = y;
		name = n;
		cc = CC;
	}
};
class Bike : public LTV
{
private:
	string makers;
	int yearModel;
	string name;
public:
	void PrintVehicle()
	{
		cout  << makers;
	}
	void ComputeTax()
	{
		if (cc <= 1000)
		{
			tax = 500;
			cout << "Bike Tax is 500\n";
		}
		else if (1000<cc <= 2000)
		{
			tax = 2000;
			cout << "Bike Tax is 2000\n";
		}
		else
		{
			tax = 3500;
			cout << "Bike Tax is 3500\n";
		}
	}
	Bike(string m, int y, int CC)
	{
		makers = m;
		yearModel = y;
		cc = CC;
	}
};
class Bus : public HTV
{
private:
	string name;
	int seatNo;
public:
	void PrintVehicle()
	{
		cout << name;
	}
	void ComputeTax()
	{
		if (seatNo >= 20)
		{
			int n = 20 * seatNo;
			tax = n;
			cout << "Bus Tax is "<<n<<endl;
		}
		else
		{
			tax = 500;
			cout << "Bus Tax is 500\n"<<endl;
		}
	}
	Bus(int l,int f)
	{
		seatNo = l;
		FixTax = f;
	}
};
class Truck : public HTV
{
private:
	string name;
	int loadCapacity;
public:
	void PrintVehicle()
	{
		cout << name;
	}
	void ComputeTax()
	{
		if (loadCapacity >= 1000)
		{
			int n = 100 * loadCapacity;
			tax = n;
			cout << "Truck Tax is " << n << endl;
		}
		else
		{
			tax = 1500;
			cout << "Truck Tax is 1500\n" ;
		}
	}
	Truck(int l, int f)
	{
		loadCapacity = l;
		FixTax = f;
	}
};