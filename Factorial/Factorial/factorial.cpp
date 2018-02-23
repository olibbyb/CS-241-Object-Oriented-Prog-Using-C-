#include <iostream>
int fact(int);
using namespace std;

int main()
{
	int num, total;
	cout<<"Enter num"<<endl;
	cin>>num;
	total = fact(num);
	cout<<"Factorial: "<<total<<endl;
}
int fact(int num)
{
	if (num == 0)
		return 1;
	else
		return num * fact(num - 1);
}