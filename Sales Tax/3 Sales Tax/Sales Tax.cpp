#include <iostream>
using namespace std;

int main()
{
	double item = 95;
	double salestax = 0.4 * item;
	double countytax = 0.2 * item;
	double totaltax = salestax + countytax;
	cout << "The total sales tax on a $" << item << " purchase is " << totaltax << endl;
	return 0;
}