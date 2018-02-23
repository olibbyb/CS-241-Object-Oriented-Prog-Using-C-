#include <iostream>
using namespace std;

int main()
{
	int floors, rooms, occupied, unoccupied, totalrooms = 0, totaloccupied = 0;
	double peroccu;
	cout << "Enter the number of floors in the hotel." << endl;
	cin >> floors;
	if (floors < 0)
	{
		cout << "Can not be negative" << endl;
		exit(1);
	}
	for (int i = 1 ; i <= floors; i++)
		{
			cout << "Enter how many rooms in floor " << i << endl;
			cin >> rooms;
			cout << "How many rooms are occupied?" << endl;
			cin >> occupied;
			totalrooms = totalrooms + rooms;
			totaloccupied = totaloccupied + occupied;
		}
	unoccupied = rooms - occupied;
	peroccu = rooms / occupied;
	cout << "Total Rooms: " << rooms << endl;
	cout << "Total Rooms Occupied: " << occupied << endl;
	cout << "Total Rooms Unoccupied: " << unoccupied << endl;
	cout << "Percentage of Rooms Occupied : " << peroccu << "%" << endl;
	return 0;
}