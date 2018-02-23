#include <iostream>
#include <iomanip>
int AddParts(int);
int RemoveParts(int);
using namespace std;

struct bins
{
	int valve;
	int bearing;
	int bushing;
	int coupling;
	int flange;
	int gear;
	int gearhousing;
	int vacuumgripper;
	int cable;
	int rod;
};

int main()
{
	bins data;
	data.valve = 10;
	data.bearing = 5;
	data.bushing = 15;
	data.coupling = 21;
	data.flange = 7;
	data.gear = 5;
	data.gearhousing = 5;
	data.vacuumgripper = 25;
	data.cable = 18;
	data.rod = 12;
	int selection, sel, loop = 1;
	while(loop == 1)
	{
	cout<<"Parts Description\tNumber of Parts in the Bin"<<endl;
	cout<<"1. Valve"<<setw(18)<<data.valve<<endl; 
	cout<<"2. Bearing"<<setw(15)<<data.bearing<<endl; 
	cout<<"3. Bushing"<<setw(16)<<data.bushing<<endl; 
	cout<<"4. Coupling"<<setw(15)<<data.coupling<<endl; 
	cout<<"5. Flange"<<setw(16)<<data.flange<<endl; 
	cout<<"6. Gear"<<setw(18)<<data.gear<<endl; 
	cout<<"7. Gear Housing"<<setw(10)<<data.gearhousing<<endl; 
	cout<<"8. Vacuum Gripper"<<setw(9)<<data.vacuumgripper<<endl;
	cout<<"9. Cable"<<setw(18)<<data.cable<<endl;
	cout<<"10. Rod"<<setw(19)<<data.rod<<endl;
	cout<<"\nEnter which bin to Add or Remove parts or enter 0 Quit Program"<<endl;
	cin>>selection;
	if (selection == 1) //Valve
	{
		cout<<"Enter selection\n1.Add Parts to Valve\n2.Remove Parts from Valve"<<endl;
		cin>>sel;
		if (sel == 1)
			data.valve = AddParts(data.valve);
		else if (sel == 2)
			data.valve = RemoveParts(data.valve);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 2) //Bearing
	{
		cout<<"Enter selection\n1.Add Parts to Bearing\n2.Remove Parts from Bearing"<<endl;
		cin>>sel;
		if (sel == 1)
			data.bearing = AddParts(data.bearing);
		else if (sel == 2)
			data.bearing = RemoveParts(data.bearing);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 3) //Bushing
	{
		cout<<"Enter selection\n1.Add Parts to Bushing\n2.Remove Parts from Bushing"<<endl;
		cin>>sel;
		if (sel == 1)
			data.bushing = AddParts(data.bushing);
		else if (sel == 2)
			data.bushing = RemoveParts(data.bushing);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 4) //Coupling
	{
		cout<<"Enter selection\n1.Add Parts to Coupling\n2.Remove Parts from Coupling"<<endl;
		cin>>sel;
		if (sel == 1)
			data.coupling = AddParts(data.coupling);
		else if (sel == 2)
			data.coupling = RemoveParts(data.coupling);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 5) //Flange
	{
		cout<<"Enter selection\n1.Add Parts to Flange\n2.Remove Parts from Flange"<<endl;
		cin>>sel;
		if (sel == 1)
			data.flange = AddParts(data.flange);
		else if (sel == 2)
			data.flange = RemoveParts(data.flange);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 6) //Gear
	{
		cout<<"Enter selection\n1.Add Parts to Gear\n2.Remove Parts from Gear"<<endl;
		cin>>sel;
		if (sel == 1)
			data.gear = AddParts(data.gear);
		else if (sel == 2)
			data.gear = RemoveParts(data.gear);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 7) //Gear Housing
	{
		cout<<"Enter selection\n1.Add Parts to Housing\n2.Remove Parts from Gear Housing"<<endl;
		cin>>sel;
		if (sel == 1)
			data.gearhousing = AddParts(data.gearhousing);
		else if (sel == 2)
			data.gearhousing = RemoveParts(data.gearhousing);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 8) //Vacuum Gripper
	{
		cout<<"Enter selection\n1.Add Parts to Gripper\n2.Remove Parts from Vacuum Gripper"<<endl;
		cin>>sel;
		if (sel == 1)
			data.vacuumgripper = AddParts(data.vacuumgripper);
		else if (sel == 2)
			data.vacuumgripper = RemoveParts(data.vacuumgripper);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 9) //Cable
	{
		cout<<"Enter selection\n1.Add Parts to Cable\n2.Remove Parts from Cable"<<endl;
		cin>>sel;
		if (sel == 1)
			data.cable = AddParts(data.cable);
		else if (sel == 2)
			data.cable = RemoveParts(data.cable);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 10) //Rod
	{
		cout<<"Enter selection\n1.Add Parts to Rod\n2.Remove Parts from Rod"<<endl;
		cin>>sel;
		if (sel == 1)
			data.rod = AddParts(data.rod);
		else if (sel == 2)
			data.rod = RemoveParts(data.rod);
		else
			cout<<"Incorrect selection";
	}
	else if (selection == 0)
	{
		loop = 0;
		exit(1);
	}
	}
}
int AddParts(int a)
{
	int amount;
	cout<<"Enter the amount of parts to add."<<endl;
	cin>>amount;
	return a + amount;
}
int RemoveParts(int b)
{
	int amount;
	cout<<"Enter the amount of parts to remove."<<endl;
	cin>>amount;
	return b - amount;
}