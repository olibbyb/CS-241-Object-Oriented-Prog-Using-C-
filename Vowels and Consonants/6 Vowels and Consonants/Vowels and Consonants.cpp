#include <iostream>
int vowels(char * str);
int consonants(char * str);
using namespace std;

int main()
{
	char inString[60];
	char selection;
	char *strPtr = inString;
	cout << "Please enter a string." << endl;
	cin.getline(inString, 61);
	cout << "\na. Count the number of vowels in the string" << endl;
	cout << "b. Count the number of consonants in the string." << endl;
	cout << "c. Count both the vowels and consonants in the string." << endl;
	cout << "d. Enter another string." << endl;
	cout << "e. Exit the program." << endl;
	cout << "\n Enter your selection." << endl;
	cin >> selection;
	if (selection == 'a')
		cout << "This string has " << vowels(inString) << " vowels." << endl;
	else if (selection == 'b')
		cout << "This string contains " << consonants(inString) << " consonants." << endl;
	else if (selection == 'c')
		cout << "This string has " << vowels(inString) << " vowels and " << consonants(inString) << " consonants." << endl;
	else if (selection == 'd')
	{
		cout << "Enter another string." << endl;
		cin.getline(inString, 61);
	}
	else
		exit(1);
	return 0;
}
int vowels(char* str)
{
	int num = 0;
	const int size = 5;
	char vowels[size] = { 'a', 'e', 'i', 'o', 'u' };
	char *vowelsPtr;
	for (vowelsPtr = vowels; *vowelsPtr != NULL; vowelsPtr++)
	{
		while (*str != NULL)
		{
			if (tolower(*str) == *vowelsPtr)
			{
				num++;
				str++;
			}
		}
	}
	return num;
}
int consonants(char * str)
{
	int num = 0;
	const int size = 22;
	char consonants[size] = { 'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };
	char *consPtr;
	for (consPtr = consonants; *consPtr != NULL; consPtr++)
	{
		while (*str != NULL)
		{
			if (tolower(*str) == *consPtr)
			{
				num++;
				str++;
			}
		}
	}
	return num;
}