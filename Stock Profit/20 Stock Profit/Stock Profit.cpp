#include <iostream>
double totalprofit(double, double, double, double, double);
using namespace std;

int main()
{
	double NS, SP, SC, PP, PC, profit;
	cout<<"Enter the number of shares."<<endl;
	cin>>NS;
	cout<<"Enter the sale price per share."<<endl;
	cin>>SP;
	cout<<"Enter the sale commission paid."<<endl;
	cin>>SC;
	cout<<"Enter the purchase price per share."<<endl;
	cin>>PP;
	cout<<"Enter the purchase commission paid."<<endl;
	cin>>PC;
	profit = totalprofit(NS, SP, SC, PP, PC);
	cout<<"Profit: "<<profit<<endl;

	return 0;
}
double totalprofit(double n, double s, double cs, double p, double cp)
{
	return ((n * s) - cs) - ((n * p) + cp);
}