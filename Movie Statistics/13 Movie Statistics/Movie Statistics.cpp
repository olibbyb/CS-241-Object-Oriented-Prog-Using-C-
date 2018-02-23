#include <iostream>
using namespace std;

int main()
{
	const int size = 20;
	int s[size], movies, avg;
	double mode, median;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter the number of movies this student saw." << endl;
		cin >> s[i];
	}
	avg = s[size] / 2;
	int c = 1, max = 0;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == s[i + 1])
		{
			c++;
			if (c > max)
			{
				max = c;
				mode = s[i];
			}
		}
		else
			c = 1;
	}
	median = (s[size / 2] + s[(size / 2) + 1] / 2);
	cout << "Average: " << avg << endl;
	cout << "Mode: " << mode << endl;
	cout << "Median: " << median << endl;
	return 0;
}