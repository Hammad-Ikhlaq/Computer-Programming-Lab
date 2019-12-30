#include<iostream>
using namespace std;

class bankAccount
{
protected:
	int accountNo;
	double balance;
public:
	bankAccount()
	{
		accountNo=0;
		balance=0;
	}
	bankAccount(int i, double j)
	{
		accountNo=i;
		balance=j;
	}
	 void setAccountNo(int i)
	{
		accountNo=i;
	}
	 int retrieveAccountNo()
	 {
		 return accountNo;
	 }
	 double retrieveBalance()
	 {
		 return balance;
	 }
	 void deposit(int i)
	 {
		 balance=balance+i;
	 }
	 void withdraw(int i)
	 {
		 balance=balance-i;
	 }
	 void printAccountinfo()
	 {
		 cout<<"Account number is "<<accountNo;
		 cout<<"\nCurrent Balance is "<<balance<<endl;
	 }
};
class checkingAccount: public bankAccount
{
private:
	
	int miniBalance;
	int interest;
	float interestRate;
	float serviceChargesRate;
	float serviceCharges;

public:
	checkingAccount()
		:bankAccount()
	{
		bankAccount::bankAccount();
		interestRate=7;
		serviceChargesRate=7;
		miniBalance=1000;
		serviceCharges=0;
	}
	checkingAccount(int AccountNo, double Balance, int interestrate,int serviceChargesrate, int min)
		:bankAccount(AccountNo, Balance)
	{
		miniBalance=min;
		interest=(Balance/100)*interestrate;
		if(Balance<=miniBalance)
		{
			serviceCharges=(Balance/100)*serviceChargesrate;
			Balance=Balance-serviceCharges;
		}
		interestRate=interestrate;
		serviceChargesRate=serviceChargesrate;
	}
	void withdraw(int i)
	 {
		 bankAccount::withdraw(i);
	 }
	void setInterestRate(int i)
	{
		interestRate=i;
	}
	int retrieveInterestRate()
	{
		return interestRate;
	}
	void setMinimumBalance(int i)
	{
		miniBalance=i;
	}
    int retrieveMinimumBalance()
	{
		return miniBalance;
	}
	void setServiceCharges(int i)
	{
		serviceCharges=i;
	}
	int retrieveServiceCharges()
	{
		return serviceCharges;
	}
	int postInterest(int Balance)
	{
		return interest=(Balance/100)*interestRate;
	}
	void printAccountinfo()
	{
		bankAccount::printAccountinfo();
		cout<<"Interest is "<<interest;
	    cout<<"\nMini Balance is "<<miniBalance;
		cout<<"\ninterest Rate is "<<interestRate;
		cout<<"\nservice Charges Rate is "<<serviceChargesRate;
		cout<<"\nservice Charges is "<<serviceCharges<<endl;
	}
};
class savingAccount: public bankAccount
{
private:
		int interest;
		float interestRate;
public:
		savingAccount()
			:bankAccount()
	{
		bankAccount::bankAccount();
	}
	void withdraw(int i)
	{
		bankAccount::withdraw(i);
	}
	void deposit(int i)
	{
		bankAccount::deposit(i);
	}
	void printAccountinfo()
	{
		bankAccount::printAccountinfo();
		cout<<" Interest is "<<interest;
	}
	void setInterestRate(int i)
	{
		interestRate=i;
	}
	int retrieveInterestRate()
	{
		return interestRate;
	}
	int postInterest(int Balance)
	{
		return interest=(Balance/100)*interestRate;
	}
};

