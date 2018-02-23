#include <iostream>
using namespace std;

struct Rectangle
{
	int length, width;
};

int main()
{
	Rectangle data;
	int perimeter, area;
	cout<<"Enter length of the rectangle."<<endl;
	cin>>data.length;
	cout<<"Enter the width of the rectangle."<<endl;
	cin>>data.width;
	perimeter = 2 * (data.length + data.width);
	area = data.length * data.width;
	cout<<"Area of the rectangle: "<<area<<endl;
	cout<<"Perimeter of the rectangle: "<<perimeter<<endl;
	return 0;
}