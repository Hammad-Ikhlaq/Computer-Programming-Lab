#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
void countlist(node * head, int& num)
{
	num = 0;
	if (head != nullptr)
	{
		node * curr = head;
		while (curr != nullptr)
		{
			num++;
			curr = curr->next;
		}
	}
}
void printlist(node * head, int num)
{
	if (head != nullptr)
	{
		node * curr = head;
      while(curr->next!=NULL)
      {
          cout<<"Data stored is "<<curr->data<<" at "<<curr<<endl;
         curr=curr->next;
      }
      cout<<"Data stored is "<<curr->data<<" at "<<curr<<endl;
	  countlist(head, num);
	cout<<"The number of nodes are\n"<<num<<endl;
	}
}
void addtofirst(node*&head)         
{
    node*newnode=new node;
   node*temp;
   cout<<"enter the id of student"<<endl;
    cin>>newnode->data;

            temp=head;
            newnode->next=temp;
            newnode->prev=NULL;
            head=newnode;
            temp->prev=newnode;  
			node*tempprint = head;
			while (tempprint != nullptr)
			{
				cout << tempprint->data << " ";
				tempprint = tempprint->next;
			}
			cout << endl;
}
void delfromfirst(node*&head)           //deleting
{  
    node*temp;
   if(head==NULL)
          {
              cout<<"no node to delete"<<endl;
          }
          else
          {
              temp=head;
              head=head->next;
              head->prev=NULL;
              delete temp;
          }
   node*tempprint = head;
   while (tempprint != nullptr)
   {
	   cout << tempprint->data << " ";
	   tempprint = tempprint->next;
   }
   cout << endl;
}
void addToLast(int no, node * &head, node *& tail)
{
	if (head == nullptr)        //empty
	{
		head = new node;        //list
		tail = head;            //with
		head->data = no;        //one
		head->next = nullptr;   //node
		head->prev = nullptr; 
	}
	else
	{
		node* temp = new node;
		temp->data = no;
		temp->next = nullptr;
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
	node*tempprint = head;
	while (tempprint != nullptr)
	{
		cout << tempprint->data << " ";
		tempprint = tempprint->next;
	}
	cout << endl;
}
void removeLastfromList( node*&head,node*&tail, int&num)

{
	countlist(head, num);
	node*curr =new node;
	curr=head;
	node*curr_1 = new node;
	curr_1=head;
	for (int i = 0; i < num-2; i++)
	{
		curr = curr->next;
	}
	curr_1 = curr->next;
	curr->next = curr_1->next;
	delete curr_1;
	num = num - 1;
	node*tempprint = head;
	while (tempprint != nullptr)
	{
		cout << tempprint->data << " ";
		tempprint = tempprint->next;
	}
	cout << endl;
}
void addtomiddle(node*head, int index)         
{
    node*newnode=new node;
   node*temp=head,*temp2=head;
   cout<<"enter the id of student"<<endl;
    cin>>newnode->data;

            temp=head;
			for(int i=0; i<index;i++)
				temp=temp->next;
			for(int i=0; i<index-1;i++)
				temp2=temp2->next;
            newnode->next=temp;
            newnode->prev=temp2;
            temp->prev=newnode;
			temp2->next = newnode;
			node*tempprint = head;
			while (tempprint != nullptr)
			{
				cout << tempprint->data << " ";
				tempprint = tempprint->next;
			}
			cout << endl;
}
void delfrommiddle(node*head, int index)           //deleting
{  
    node*temp=head,*temp2=head;
   if(head==NULL)
          {
              cout<<"no node to delete"<<endl;
          }
          else
          {
              temp=head;
			for(int i=0; i<index+1;i++)
				temp=temp->next;
			for(int i=0; i<index-1;i++)
				temp2=temp2->next;
			delete temp2->next;
			temp2->next = temp;
			temp->prev = temp2;
          }
   node*tempprint = head;
   while (tempprint != nullptr)
   {
	   cout << tempprint->data << " ";
	   tempprint = tempprint->next;
   }
   cout << endl;
}

int main()
{ 
    int id,num=1,command=0;
	node*head = nullptr, *tail = nullptr; //empty list
	node*newnode = new node;
	cout << "enter the id of first student" << endl;
	cin >> newnode->data;
	newnode->next = nullptr;
	newnode->prev = nullptr;
	head = newnode;
	tail = newnode;
	node*tempprint = head;
	while(command!=5)
	{
		cout<<"1-Insert a node at start\n";
		cout<<"2-Delete a node at start\n";
		cout<<"3-Insert a node at end\n4-Delete a node at end\n";
		cout<<"5-Insert a node at middle\n6-Delete a node at middle\n";
		cout<<"7-Display the data and count\n";
		cout<<"8-Exit\n";
		cin>>command;
		if(command==1)
		{
			addtofirst(head);
		}
		else if(command==2)
		{
			delfromfirst(head);
		}
		else if(command==3)
		{
			cout << "Enter the id of the student\n";
			cin >> id;
			addToLast(id, head, tail);
		}
		else if(command==4)
		{
			removeLastfromList( head,tail, num);
		}
		else if(command==5)
		{
			countlist(head, num);
			int tempnum=(num/2);
			addtomiddle(head, tempnum);
		}
		else if(command==6)
		{
			countlist(head, num);
			int tempnum=(num/2);
			delfrommiddle(head, tempnum);
		}
		else if(command==7)
		{
			printlist(head, num);
		}
		//system("cls");
	}
	system("pause");
	return 0;
}



