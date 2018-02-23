#include <iostream>
using namespace std;

int main()
{
	double budget, expense = 0, finalt;
	int s = 0;
	cout << "Enter the amount that you have budgeted for a month." << endl;
	cin >> budget;
	while (s == 0)
	{
		cout << "Enter expenses for the month" << endl;
		cin >> expense;
		expense += expense;
		cout << "Type 1 to quit, or 0 to keep adding." << endl;
		cin >> s;
	}
	finalt = budget - expense;
	cout << "Total Amount:" << budget << endl;
	return 0;
}