// Olivia Bravo
#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct studentType
	{
		string firstname;
		string lastname;
		char grade;
		int s1;
		int s2;
	};
	studentType Bravo;
	cout<<"Enter first name "<<endl;
	cin>>Bravo.firstname;
	cout<<"Enter last name "<<endl;
	cin>>Bravo.lastname;
	cout<<"Enter score 1 "<<endl;
	cin>>Bravo.s1;
	cout<<"Enter score 2 "<<endl;
	cin>>Bravo.s2;
	double score = (Bravo.s1 + Bravo.s2) / 2;
	if (score >= 90)
		Bravo.grade = 'A';
	else if (score >= 80)
		Bravo.grade = 'B';
	else if (score >= 70)
		Bravo.grade = 'C';
	else
		Bravo.grade = 'D';
	cout<<Bravo.firstname<<" " <<Bravo.lastname<<" "<<Bravo.s1<<" "<<Bravo.s2<<" "<<Bravo.grade<<endl;
}