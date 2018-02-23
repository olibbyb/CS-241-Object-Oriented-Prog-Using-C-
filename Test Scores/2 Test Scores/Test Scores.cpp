#include <iostream>
int order(int[], int);
double average(int[], int);
using namespace std;

int main()
{

	int scores[20], ascending, t = 0, sum = 0;
	double avg;
	for (int i = 0; i <= 20; i++)
	{
		cout << "Enter a score." << endl;
		cin >> scores[i];
	}
	ascending = order(scores, t);
	avg = average(scores, sum);
	cout << ascending << endl;
	cout << "Average:" << avg << endl;
	return 0;
}
int order(int list[], int a)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			if (list[j] < list[i])
			{
				a = list[i];
				list[i] = list[j];
				list[j] = a;
			}
		}
	}
	return a;
}
double average(int l[], int a)
{
	for (int i = 0; i <= 20; i++)
		a = a + l[i];
	return a / 2;
}