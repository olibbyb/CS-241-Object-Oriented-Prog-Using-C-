#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string pattern = "***************";
	for (int i = 1; i <= 15; i++)
	{
		for (int u = 1; u <= i; u++)
		{
			cout << pattern.substr(0, 1);
		}
		cout << endl;
	}
	cout<<endl;
	for (int x = 15; x >= 0; x--)
	{
		for (int o = 1; o <= x; o++)
		{
			cout << pattern.substr(0, 1);
		}
		cout << endl;
	}
	return 0;
}