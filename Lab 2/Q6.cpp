#include<iostream>
using namespace std;
	struct student
{    	int roll_no;
     	char name[20],city[20];
     	int phone;
};
int main()
{    	
	student std[10];
	for (int i = 0; i < 10; i++)
	{
     	cout<<"Enter roll number?"<<endl;
     	cin>>std[i].roll_no;
     	cout<<"Enter name of student?"<<endl;
     	cin>>std[i].name;
     	cout<<"Enter name of city of student?"<<endl;
     	cin>>std[i].city;
     	cout<<"Enter phone of student?"<<endl;
     	cin>>std[i].phone;
     	cout<<endl;
     	cout<<"Roll no. : "<<std[i].roll_no<<endl;
     	cout<<"Name: "<<std[i].name<<endl;
     	cout<<"City: "<<std[i].city<<endl;
     	cout<<"Phone: "<<std[i].phone<<endl;
}
	
	system("pause");
	return 0;
}