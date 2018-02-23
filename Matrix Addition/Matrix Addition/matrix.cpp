#include <iostream>
using namespace std;

int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	for(int i = 0; i <= 2; i++)
		for(int j = 0; j <= 2; j++)
		{
			cout<<"Enter the row "<<i<<" column "<<j<<" element for array a"<<endl;
			cin>>a[i][j];
		}
	for(int d = 0; d <= 2; d++)
		for(int b = 0; b <= 2; b++)
		{
			cout<<"Enter the row "<<d<<" column "<<b<<" element for array b"<<endl;
			cin>>a[d][b];
		}
	for(int k = 0; k <= 2; k++)
		for(int l = 0; l <= 2; l++)
		{
			c[k][l] = a[k][l] + b[k][l];
			cout<<"Row "<<k<<" and Column "<<l<<" of array c = "<<c[k][l]<<endl;
		}
	return 0;
}