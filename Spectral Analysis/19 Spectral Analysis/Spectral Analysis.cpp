#include <iostream>
using namespace std;

int main()
{
	double wavelength;
	cout<<"Enter the wavelength in meters"<<endl;
	cin>>wavelength;
	if (wavelength < 0.00 && wavelength > 0.01)
		cout<<"The wave is a Radio Wave."<<endl;
	else if (wavelength < 0.01 && wavelength > 0.001)
		cout<<"The wave is a Microwave."<<endl;
	else if (wavelength < 0.001 && wavelength > 0.0000007)
		cout<<"The wave is Infrared."<<endl;
	else if (wavelength < 0.0000007 && wavelength > 0.0000004)
		cout<<"The wave is a Visible Light"<<endl;
	else if (wavelength < 0.0000004 && wavelength > 0.00000001)
		cout<<"The wave is Ultraviolet"<<endl;
	else if (wavelength < 0.00000001 && wavelength > 0.00000000001)
		cout<<"The wave is a X-Ray"<<endl;
	else if (wavelength < 0.00000000001)
		cout<<"The wave is a Gamma Ray"<<endl;
	else
		cout<<"The wave is greater than 0."<<endl;
	return 0;
}