#include <iostream>
using namespace std;

int main()
{
	int gallon = 20;
	double town = 23.5, highway = 28.9, distancet, distanceh;
	distancet = gallon * town;
	distanceh = gallon* highway;
	cout << "The distance of a 20-gallon car in a town is " << distancet << endl;
	cout << "The distance of a 20-gallon car on the highway is " << distanceh << endl;
	return 0;
}