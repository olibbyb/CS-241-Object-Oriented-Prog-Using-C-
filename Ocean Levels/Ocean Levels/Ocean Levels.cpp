#include <iostream>
using namespace std;

int main()
{
	double oceanlevel = 0, rising = 1.5;
	double yearfive = 5 * rising, yearseven = 7 * rising, yearten = 10 * rising;
	cout << "The current ocean level is " << oceanlevel << endl;
	cout << "In 5 years, the ocean level will be " << yearfive << " millimeters high." << endl;
	cout << "In 7 years, the ocean level will be " << yearseven << " millimeters high." << endl;
	cout << "In 10 years, the ocean level will be " << yearten << " millimeters high." << endl;
	return 0;
}