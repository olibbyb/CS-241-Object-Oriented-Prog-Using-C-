#include <iostream>
double getSales(double);
void findHighest(double, double, double, double);
using namespace std;

int main()
{
	double NE = 0, SE = 0, NW = 0, SW = 0, NESale, SESale, NWSale, SWSale, highest;
	cout<<"\t*Northeast Division*"<<endl;
	NESale = getSales(NE);
	cout<<"\n\t*Southeast Division*"<<endl;
	SESale = getSales(SE);
	cout<<"\n\t*Northwest Division*"<<endl;
	NWSale = getSales(NW);
	cout<<"\n\t*Southeast Division*"<<endl;
	SWSale = getSales(SW);
	findHighest(NESale, SESale, NWSale, SWSale);
	return 0;
}
double getSales(double a)
{
	cout<<"Enter the division's quarterly sales figure"<<endl;
	cin>>a;
	if (a < 0)
		cout<<"Incorrect number entered"<<endl;
	else
		return a;
}
void findHighest(double NE, double SE, double NW, double SW)
{
	if (NE > SE && NE > NW && NE > SW)
		cout<<"The Northeast division is the largest out of the four divisions with a sales figure of $"<<NE<<endl;
	else if (SE < NE && SE < NW && SE < SW)
		cout<<"The Southeast division is the largest out of the four divisions with a sales figure of $"<<SE<<endl;
	else if (NW < NE && NW < SE && NW < SW)
		cout<<"The Northwest division is the largest out of the four divisions with a sales figure of $"<<NW<<endl;
	else if (SW < NE && SW < SW && SW < NW)
		cout<<"The Southwest division is the largest out of the four divisions with a sales figure of $"<<SW<<endl;
}