#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double A = 15, B = 12, C = 9; 
	double Asold, Bsold, Csold, Atotal, Btotal, Ctotal, total;
	cout<<"How many tickets sold for Class A?";
	cin>>Asold;
	cout<<"How many tickets sold for Class B?";
	cin>>Bsold;
	cout<<"How many tickets sold for Class C?";
	cin>>Csold;
	Atotal = Asold * A;
	Btotal = Bsold * B;
	Ctotal = Csold * C;
	total = Atotal + Btotal + Ctotal;
	cout<<"Total sales generated: $"<<setprecision(2)<<fixed<<total<<endl;
	return 0;
}