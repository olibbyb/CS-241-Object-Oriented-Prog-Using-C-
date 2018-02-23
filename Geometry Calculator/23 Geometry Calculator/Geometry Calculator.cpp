#include <iostream>
using namespace std;

int main()
{
	int selection;
	double r, l, w, b, h, area;
	cout<<"Geometry Calculator"<<endl;
	cout<<"\t1. Calculate the Area of a Circle"<<endl;
	cout<<"\t2. Calculate the Area of a Rectangle"<<endl;
	cout<<"\t3. Calculate the Area of a Triangle"<<endl;
	cout<<"\t4. Quit"<<endl;
	cout<<"Enter your selection"<<endl;
	cin>>selection;
	if (selection == 1)
	{
		cout<<"Enter the radius of the circle."<<endl;
		cin>>r;
		if (r < 0)
		{
			cout<<"Should not be negative."<<endl;
			exit(1);
		}
		area = 3.1415 * pow(r,2);
		cout<<"The area of the circle is "<<area<<endl;
	}
	else if (selection == 2)
	{
		cout<<"Enter the length of the rectangle."<<endl;
		cin>>l;
		if (l < 0)
		{
			cout<<"Should not be negative."<<endl;
			exit(1);
		}
		cout<<"Enter the width of the rectangle."<<endl;
		cin>>w;
		if (w < 0)
		{
			cout<<"Should not be negative."<<endl;
			exit(1);
		}
		area = l * w;
		cout<<"The area of the rectangle is "<<area<<endl;

	}
	else if (selection == 3)
	{
		cout<<"Enter the base of the triangle."<<endl;
		cin>>b;
		if (b < 0)
		{
			cout<<"Should not be negative"<<endl;
			exit(1);
		}
		cout<<"Enter the height of the triangle."<<endl;
		cin>>h;
		if (h < 0)
		{
			cout<<"Should not be negative"<<endl;
			exit(1);
		}
		area = b * h * 0.5;
		cout<<"The area of the triangle is "<<area<<endl;
	}
	else if (selection < 0 || selection > 4)
		cout<<"Incorrect number selected."<<endl;
	else
	return 0;
}