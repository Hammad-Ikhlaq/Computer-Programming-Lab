#include<iostream>
#include"bank.h"
using namespace std;
int main()
{
	int i;
	double j;
	bankAccount Hammad(99,50);
	//Hammad.printAccountinfo();
	//Hammad.setAccountNo(99999);
	//Hammad.printAccountinfo();
	//Hammad.deposit(5000);
	//Hammad.printAccountinfo();
	//Hammad.withdraw(450);
	//Hammad.printAccountinfo();
	checkingAccount Fakhar(999, 500,7,7, 1000);
	Fakhar.printAccountinfo();
	//Hammad.printAccountinfo();
	//Hammad.deposit(5000);
	//Hammad.printAccountinfo();
	//Hammad.withdraw(450);
	//Hammad.printAccountinfo();
	system("pause");
	return 0;
}

