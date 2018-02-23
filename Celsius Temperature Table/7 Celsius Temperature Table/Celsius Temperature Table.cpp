#include <iostream>
double celsius(double);
using namespace std;

int main()
{
	double f, c;
	cout<<"Enter the temperature in Fahrenheit"<<endl;
	cin>>f;
	c = celsius(f);
	cout<<"The temperature in Celsius is "<<c<<endl;

}
double celsius(double f)
{
	return ((f - 32) * (5 / 9));
}