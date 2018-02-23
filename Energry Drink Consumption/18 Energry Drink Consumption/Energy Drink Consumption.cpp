#include <iostream>
using namespace std;

int main()
{
	int customers = 16500;
	double weekper = 0.15, citrusper = 0.58, week, citrus;
	week = 16500 * weekper;
	citrus = 16500 * citrusper;
	cout << "The number of customers who purchase one or more energy drinks per week is " << week << " out of 16,500 customers." << endl;
	cout << "The number of customers who prefer citrus-flavored energy drinks is " << citrus << " out of 16,500 customers." << endl;
	return 0;
}