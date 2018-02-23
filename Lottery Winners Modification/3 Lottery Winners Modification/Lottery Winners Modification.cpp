#include <iostream>
int search(const int[], int, int);
const int size = 10;
using namespace std;

int main()
{
	int num[size] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int digit, s;
	cout<<"Enter this week's winning 5 digit number."<<endl;
	cin>>digit;
	s = search(num, size, digit);
	if (s == -1)
		cout<<"The ticket is not a winner this week."<<endl;
	else
		cout<<"One of the tickets is a winner this week."<<endl;
	return 0;
}
int search(const int array[], int s, int v)
{
	int first = 0, last = size - 1, middle, pos = -1;
	bool found = false;
	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == v)
		{
			found = true;
			pos = middle;
		}
		else if (array[middle] > v)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return pos;
}