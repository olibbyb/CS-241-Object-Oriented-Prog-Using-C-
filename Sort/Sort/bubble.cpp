#include <iostream>
using namespace std;

int main()
{
	int a[5] = { 40, 10, 30, 20, 5 };
	int temp;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i = 4; i > -1; i--)
		cout<<a[i]<<endl;
	return 0;
}