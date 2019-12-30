#include<iostream>
#include"Header.h"
using namespace std;
int main(){
		Car * c1 = new Car("Honda", 2012, "City", 1500);
		Car * c2 = new Car("Mercedes", 2016, "Kompressor", 2000);
		Car * c3 = new Car("Suzuki", 2016, "Wagon_r", 800);

		Bike * b1 = new Bike("Honda", 2012, 100);
		Bike * b2 = new Bike("Uniqe", 2016, 70);
		Bike * b3 = new Bike("Suzuki", 2016, 125);

		//second parameter is Fix tax for HTV class
		Truck * t1 = new Truck(1500, 5000);
		Truck * t2 = new Truck(1500, 5000);
		Truck * t3 = new Truck(800, 5000);

		Bus * bb1 = new Bus(100, 5000);
		Bus * bb2 = new Bus(70, 5000);
		Bus * bb3 = new Bus(125, 5000);

		Vehicle * V[12];
		V[0] = c1;
		V[1] = c2;
		V[2] = c3;
		V[3] = b1;
		V[4] = b2;
		V[5] = b3;
		V[6] = t1;
		V[7] = t2;
		V[8] = t3;
		V[9] = bb1;
		V[10] = bb2;
		V[11] = bb3;
		for (int i = 0; i < 12; i++)
		{
			V[i]->PrintVehicle();	V[i]->ComputeTax();
		} 

	system("pause");
	return 0;
}

