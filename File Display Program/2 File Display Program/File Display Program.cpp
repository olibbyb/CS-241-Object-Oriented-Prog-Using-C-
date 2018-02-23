#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()

{
	string line;
	ifstream dataFile;
	dataFile.open("Rose.txt");
	while(getline(dataFile, line))
	{
		cout<<line<<endl;;
	}
	dataFile.close();
	return 0;
}