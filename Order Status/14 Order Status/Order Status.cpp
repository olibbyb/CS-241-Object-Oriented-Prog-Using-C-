#include <iostream>
void info(int, int, double);
void ready(int, int, double, double, double);
using namespace std;

int main()
{
	int spool = 0, numspool = 0, numspoolready = 100, spoolbackorder = 5;
	double ship = 0, subtotal = 100, totalship = 10, totalready = 100;
	info(spool, numspool, ship);
	ready(numspoolready, spoolbackorder, subtotal, totalship, totalready);
	return 0;
}
void info(int a, int b, double c)
{
	cout<<"Enter the number of spools ordered"<<endl;
	cin>>a;
	cout<<"The number of spools in stock:"<<b<<endl;
	cout<<"Is there any shipping or handling chargest? Enter 1 for yes or 0 for no."<<endl;
	cin>>c;
	if (c == 1)
	{
		cout<<"Enter the special charges."<<endl;
		cin>>c;
	}
	else 
		c = 10.00;
}
void ready(int d, int e, double f, double g, double h)
{
	cout<<"Number of spools ready to ship from current stock:"<<d<<endl;
	cout<<"Number of spools on backorder:"<<e<<endl;
	cout<<"Subtotal of the portion ready to ship: "<<f * 100.0<<endl;
	cout<<"Total shipping and handlight charges of the portion ready to ship:"<<g<<endl;
	cout<<"Total of the order ready to ship:"<<h<<endl;
}