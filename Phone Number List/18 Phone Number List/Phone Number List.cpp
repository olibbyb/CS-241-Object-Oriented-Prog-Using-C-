#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int size = 10, slength = 25;
	char info[size][slength] = { "Alejandra Cruz, 555-1223", "Joe Looney, 555-0097", "Geri Palmer, 555-8787", "Li Chen, 555-1212", "Holly Gaddis, 555-8787", "Sam Wiggins, 555-0998", "Bob Kain, 555-8712", "Tim Haynes, 555-7676", "Warren Gaddis, 555-9037", "Jean James, 555-4939"};
	char in[slength];
	char *strPtr = NULL;
	int items[size];
	cout << "Enter a name, partial name, or phone number to look up." << endl;
	cin.getline(in, slength);
	int i = 0, num = 0;
	while (i < size)
	{
		strPtr = strstr(info[i], in);
		if (strPtr != NULL)
		{
			num++;
			items[num] = i;
		}
		i++;
	}
	for (int i = 0; i < num; i++)
	{
		cout << info[(items[i])] << endl;
	}
	return 0;
}