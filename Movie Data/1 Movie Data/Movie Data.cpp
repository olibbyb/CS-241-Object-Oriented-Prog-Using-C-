#include <iostream>
#include <string>
void movieinformation(struct MovieData);
using namespace std;

struct MovieData
{
	string title;
	string director;
	int year;
	int runtime; //in minutes
};

int main()
{

	MovieData one;
	one.title = "Scott Pilgrim vs. The World";
	one.director = "Edgar Wright";
	one.year = 2010;
	one.runtime = 112;
	movieinformation(one);
	MovieData two;
	two.title = "Anastasia";
	two.director = "Don Bluth";
	two.year = 1997;
	two.runtime = 94;
	movieinformation(two);
}
void movieinformation(struct MovieData a)
{
	cout<<"Title: "<<a.title<<endl;
	cout<<"Director: "<<a.director<<endl;
	cout<<"Year: "<<a.year<<endl;
	cout<<"Runtime (in minutes): "<<a.runtime<<endl;
	cout<<"\n"<<endl;
}