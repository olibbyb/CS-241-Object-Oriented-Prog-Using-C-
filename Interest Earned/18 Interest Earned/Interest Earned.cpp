#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double amount, principal, interest, interestrate, compounded;
	cout<<"Enter balance in savings account"<<endl;
	cin>>principal;
	cout<<"Enter interest rate"<<endl;
	cin>>interestrate;
	cout<<"Enter number of times the interest is compounded."<<endl;
	cin>>compounded;
	interestrate = interestrate / 100;
	amount = principal * pow((1 + (interestrate/compounded)), compounded);
	interest = amount - principal;
	interestrate = interestrate * 100;
	cout<<"Interest Rate: "<<setprecision(2)<<fixed<<setw(12)<<interestrate<<"%"<<endl;
	cout<<"Times Compounded: "<<setprecision(2)<<fixed<<setw(10)<<compounded<<endl;
	cout<<"Principal: "<<setprecision(2)<<fixed<<setw(10)<<"$"<<principal<<endl;
	cout<<"Interest: "<<setprecision(2)<<fixed<<setw(11)<<"$"<<setw(7)<<interest<<endl;
	cout<<"Amount in Savings: "<<setprecision(2)<<fixed<<setw(2)<<"$"<<amount<<endl;
	return 0;
}