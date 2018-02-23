#include <iostream>
int sizeofstring(char*);
using namespace std;

int main()
{
	char userString[60];
	cout << "Enter a sentence." << endl;
	cin.getline(userString, 61);
	cout << "The number of words in your sentence is " << sizeofstring(userString) << endl;
	return 0;
}
int sizeofstring(char *cs)
{
	int count = 1;
	while (*cs != NULL)
	{
		if (*cs == ' ')
		{
			count++;
		}
		*cs++;
	}
	return count;
}