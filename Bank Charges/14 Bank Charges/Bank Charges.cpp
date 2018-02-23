#include <iostream>
using namespace std;

int main()
{
	double balance, fee1, fee2, totalfee;
	int checks;
	cout<<"Please enter your beginning balance."<<endl;
	cin>>balance;
	if (balance < 0)
		cout<<"Your account is overdrawn."<<endl;
	else
	{
		cout<<"Enter the number of checks written."<<endl;
		cin>>checks;
		if(balance < 400)
			fee1 = 15.00;
		else
			fee1 = 0;
		if (checks >= 0 && checks < 20)
			fee2 = checks * 0.10;
		else if (checks >= 20 && checks < 39)
			fee2 = checks * 0.08;
		else if (checks >= 40 && checks < 59)
			fee2 = checks * 0.06;
		else if (checks >= 60)
			fee2 = checks * 0.04;
		else
			cout<<"The number of checks cannot be negative."<<endl;
		totalfee = fee1 + fee2;
		cout<<"Low Balance Fee: $"<<fee1<<endl;
		cout<<"Check Fees: $"<<fee2<<endl;
		cout<<"Total Monthly Fees: $"<<totalfee<<endl;
	}
	return 0;
}