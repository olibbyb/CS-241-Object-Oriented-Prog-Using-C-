#include <iostream>
int conversionOctal(int);
int conversionHexadecimal(int);
using namespace std;

int main()
{
	int num, bresult;
	cout << "Please enter a number." << endl;
	cin >> num;
	bresult = conversionOctal(num);
	cout << "\nYour number: " << num << endl;
	cout << "Your number in Octal: " << bresult << endl;
	cout << "Your number in Hexadecimal: ";
	conversionHexadecimal(num);
	return 0;
}
int conversionOctal(int a)
{
	int octal = 0, i = 1;
	while (a != 0)
	{
		octal += (a % 8) * i;
		a /= 8;
		i *= 10;
	}
	return octal;
}
int conversionHexadecimal(int b)
{
	int c = 10, c2 = 0, c3 = 0;
	const char letter[6] = { 65,66,67,68,69,70 };
	const char number[10] = { 48,49,50,51,52,53,54,55,56,57 };
	char hex[8];
	while (b >= 1)
	{
		c = 10; c2 = 0;
		if ((b % 16) < 10)
		{
			while (c2 != b % 16)
			{
				c2++;
			}
			hex[c3] = number[c2];
		}

		c2 = 0;
		if ((b % 16) >= 10)
		{
			while (b % 16 != c)
			{
				c2++;
				c++;
			}
			hex[c3] = letter[c2];
		}
		b /= 16;
		c3++;
	}
	while (c3 >= 0)
	{
		c3--;
		cout << hex[c3];
	}
	return hex[c3];
}