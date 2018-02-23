#include <iostream>
int mode(const int, int []);
using namespace std;

int main()
{
	const int size = 10;
	int a[size] = { 65, 76, 65, 34, 89, 82, 22, 65, 98, 76 }, m;
	m = mode(size, a);
	cout << "Mode: " << m << endl;
	return 0;
}
int mode(const int s, int b[])
{
		int counter = 1;
		int max = 0;
		int moe = b[0];
		for (int p = 0; p < s; p++)
		{
			if (b[p] == b[p + 1])
			{
				counter++;
				if (counter > max)
				{
					max = counter;
					moe = b[p];
				}
			}
			else
				counter = 1;
		}
		return moe;
}