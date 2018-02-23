#include <iostream>
using namespace std;

int main()
{
	int month, year, days;
	cout<<"Enter the month in numeric form."<<endl;
	cin>>month;
	cout<<"Enter the year."<<endl;
	cin>>year;
	if (year / 100)
	{
		if (year / 400)
		{
			cout<"It is a leap year.";
			days = 29;
		}
		else
			cout<"It is not a leap year.";
	}
	else
		cout<<"It is not a leap year.";
	cout<<days<<" days"<<endl;
	return 0;
}