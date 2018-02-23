#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month;
	int year;
	double total, sales, countytax = 0.02, statetax = 0.4, totaltax;
	double totalstate, totalcounty;
	cout<<"Please enter the month"<<endl;
	cin>>month;
	cout<<"Please enter the year"<<endl;
	cin>>year;
	cout<<"Please enter the total amount collected at the cash register"<<endl;
	cin>>total;
	sales = total/1.06;
	totalstate = sales * statetax;
	totalcounty = sales * countytax;
	totaltax = totalstate + totalcounty;
	cout<<endl;
	cout<<"Month: "<<month<<endl;
	cout<<"Year: "<<year<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Total Collected: "<<setw(10)<<"$"<<setw(9)<<setprecision(2)<<fixed<<total<<endl;
	cout<<"Sales: "<<setw(20)<<"$"<<setw(9)<<setprecision(2)<<fixed<<sales<<endl;
	cout<<"County Sales Tax: "<<setw(9)<<"$"<<setw(9)<<setprecision(2)<<fixed<<totalcounty<<endl;
	cout<<"State Sales Tax: "<<setw(10)<<"$"<<setw(9)<<setprecision(2)<<fixed<<totalstate<<endl;
	cout<<"Total Sales Tax: "<<setw(10)<<"$"<<setw(9)<<setprecision(2)<<fixed<<totaltax<<endl;
	return 0;
}