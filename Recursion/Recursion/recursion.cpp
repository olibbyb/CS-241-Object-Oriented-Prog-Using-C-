#include <iostream>
int larger(const int[], int, int);
using namespace std;

int main()
{
	const int size = 4;
	int list[size];
	int max;
	cout<<"Enter "<<size<<" numbers."<<endl;
	for(int i = 0; i < size; i++)
		cin>>list[i];
	cout<<larger(list, 0, 3)<<endl;
}
int larger(const int list[], int lower, int upper)
{
	int max;
	if (lower == upper)
		return list[lower];
	else
	{
		max = larger(list, lower + 1, upper);
		if(list[lower] >= max)
			return list[lower];
		else
			return max;
	}
}