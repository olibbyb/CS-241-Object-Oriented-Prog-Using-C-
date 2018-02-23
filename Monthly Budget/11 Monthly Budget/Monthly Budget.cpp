#include <iostream>
using namespace std;
void final(struct MonthlyBudget, struct MonthlyBudget);
struct MonthlyBudget
{
	double housing;
	double utilities;
	double householdexpenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double miscellaneous;
};

int main()
{
	MonthlyBudget month;
	month.housing = 500.00;
	month.utilities = 150.00;
	month.householdexpenses = 65.00;
	month.transportation = 50.00;
	month.food = 250.00;
	month.medical = 30.00;
	month.insurance = 100.00;
	month.entertainment = 150.00;
	month.clothing = 75.00;
	month.miscellaneous = 50.00;
	MonthlyBudget current;
	cout<<"Enter housing budget spent."<<endl;
	cin>>current.housing;
	cout<<"Enter utilities budget spent."<<endl;
	cin>>current.utilities;
	cout<<"Enter household expenses budget spent."<<endl;
	cin>>current.householdexpenses;
	cout<<"Enter transportation budget spent."<<endl;
	cin>>current.transportation;
	cout<<"Enter food budget spent."<<endl;
	cin>>current.food;
	cout<<"Enter medical budget spent."<<endl;
	cin>>current.medical;
	cout<<"Enter insurance budget spent."<<endl;
	cin>>current.insurance;
	cout<<"Enter entertainment budget spent."<<endl;
	cin>>current.entertainment;
	cout<<"Enter clothing budget spent."<<endl;
	cin>>current.clothing;
	cout<<"Enter miscellaneous budget spent."<<endl;
	cin>>current.miscellaneous;
	cout<<"\n"<<endl;
	final(month, current);
}
void final(struct MonthlyBudget a, struct MonthlyBudget b)
{
	double housing = a.housing - b.housing;
	cout<<"Housing: "<<housing<<endl;
	double utilities = a.utilities - b.utilities;
	cout<<"Utilities: "<<utilities<<endl;
	double householdexpenses = a.householdexpenses - b.householdexpenses;
	cout<<"Household Expenses: "<<householdexpenses<<endl;
	double transportation = a.transportation - b.transportation;
	cout<<"Transportation: "<<transportation<<endl;
	double food = a.food - b.food;
	cout<<"Food: "<<food<<endl;
	double medical = a.medical - b. medical;
	cout<<"Medical: "<<medical<<endl;
	double insurance = a.insurance - b.insurance;
	cout<<"Insurance: "<<insurance<<endl;
	double entertainment = a.entertainment - b.entertainment;
	cout<<"Entertainment: "<<entertainment<<endl;
	double clothing = a.clothing - b.clothing;
	cout<<"Clothing: "<<clothing<<endl;
	double miscellaneous = a.miscellaneous - b.miscellaneous;
	cout<<"Miscellaneous: "<<miscellaneous<<endl;
}