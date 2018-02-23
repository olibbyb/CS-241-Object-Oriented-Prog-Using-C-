#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{
	int num1, num2, sum, answer;
	num1 = rand() % 999;
	num2 = rand() % 999;
	sum = num1 + num2;
	cout<<setw(5)<<num1<<endl;
	cout<<"+"<<setw(4)<<num2<<endl;
	cout<<setw(5)<<"_____\n"<<endl;
	cout<<"Enter the answer"<<endl;
	cin>>answer;
	if (sum == answer)
		cout<<"Congratualtions, you are correct."<<endl;
	else
		cout<<"Incorrect, the correct answer is "<<sum<<endl;
	return 0;
}