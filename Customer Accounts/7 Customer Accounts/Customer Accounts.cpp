#include <iostream>
#include <string>
void display(struct Account);
using namespace std;

struct Account
{
	string name;
	string address;
	string city;
	string state;
	int zip;
	int phonenum;
	double balance; //acount balance
	int date; // date of last payment
};

int main()
{
	Account info[10];
	for(int i = 0 ; i <=10 ; i++)
	{
		cout<<"Enter name."<<endl;
		cin>>info[i].name;
		cout<<"Enter address."<<endl;
		cin>>info[i].address;
		cout<<"Enter city. "<<endl;
		cin>>info[i].city;
		cout<<"Enter state. "<<endl;
		cin>>info[i].state;
		cout<<"Enter zip number. "<<endl;
		cin>>info[i].zip;
		cout<<"Enter phone number. "<<endl;
		cin>>info[i].phonenum;
		cout<<"Enter account balance. "<<endl;
		cin>>info[i].balance;
		cout<<"Enter date of last payment. "<<endl;
		cin>>info[i].date;
		display(info[i]);
	}
}
void display(struct Account a)
{
	cout<<"\nName: "<<a.name<<endl;
	cout<<"Address: "<<a.address<<endl;
	cout<<"City: "<<a.city<<endl;
	cout<<"State: "<<a.state<<endl;
	cout<<"Zip Number: "<<a.zip<<endl;
	cout<<"Account Balance: "<<a.balance<<endl;
	cout<<"Date: "<<a.date<<endl;
}