#include <iostream>
int search( const int[], int, int);
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
int search(const int list[], int s, int v)
{
	int i = 0;
	int pos = -1;
	bool found = false;
	while (i < s && !found)
	{
		if(list[i] == v)
		{
			found = true;
			pos = i;
		}
		i++;
	}
	return pos;
}