#include <iostream>
using namespace std;

int main()
{
	double interest, startingbal, depobal = 0, withdrabal = 0, monthlyinterest, totalinterest = 0, finalbal = 0;
	int month;
	cout << "Enter the starting balance." << endl;
	cin >> startingbal;
	cout << "Enter the number of months." << endl;
	cin >> month;
	cout << "Enter the annual interest rate." << endl;
	cin >> interest;
	monthlyinterest = interest / 12;
	for (int i = 1; i <= month; i++)
	{
		cout << "Enter the amount deposited into the account during month " << i << endl;
		cin >> depobal;
		finalbal = startingbal + depobal;
		cout << "Enter the amount withdrawn from the account during month " << i << endl;
		cin >> withdrabal;
		finalbal = startingbal - withdrabal;
		totalinterest = startingbal * monthlyinterest;
		finalbal = startingbal + totalinterest;
	}
	cout << "Ending balance: $" << finalbal <<endl;
	cout << "Total Amount of Deposits: " << depobal << endl;
	cout << "Total Amount of Withdrawals: " << withdrabal << endl;
	cout << "Total Interest Earned: " << totalinterest << endl;
	return 0;
}