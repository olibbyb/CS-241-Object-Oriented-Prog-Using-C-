#include <iostream>
using namespace std;

int main()
{
	double gal, miles, mpg;
	cout<<"Please enter the number of gallons of gas the car can hold"<<endl;
	cin>>gal;
	cout<<"Please enter the number of miles it can be driven on a full tank"<<endl;
	cin>>miles;
	mpg = miles / gal;
	cout<<"Number of miles that may be driven per gallon of gas = "<<mpg<<endl;
	return 0;
}