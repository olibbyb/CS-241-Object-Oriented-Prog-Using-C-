#include <iostream>
using namespace std;

int main()
{
	int month, day, year, monthday;
	cout<<"Enter the month in numeric form."<<endl;
	cin>>month;
	cout<<"Enter the day."<<endl;
	cin>>day;
	cout<<"Enter the year in two digits."<<endl;
	cin>>year;
	monthday = month * day;
	if (monthday == year)
		cout<<"This date is magic."<<endl;
	else
		cout<<"This date is not magic."<<endl;
	return 0;
}