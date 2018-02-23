#include <iostream>
int search(const int[], int, int);
const int size = 18;
using namespace std;

int main()
{
	double canum, s;
	int num[size] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
	cout<<"Enter a charge account number."<<endl;
	cin>>canum;
	s = search(num, size, canum);
	if (s == -1)
		cout<<"Your number "<<canum<<" is invalid."<<endl;
	else
		cout<<"Your number "<<canum<<" is valid."<<endl;
	return 0;
}
int search(const int list[], int n, int v)
{
	int i = 0;
	int pos = -1;
	bool found = false;
	while ( i < n && !found)
	{
		if (list[i] == v)
		{
			found = true;
			pos = i;
		}
		i++;
	}
	return pos;
}