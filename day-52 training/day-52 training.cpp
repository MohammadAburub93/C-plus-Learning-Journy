#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream SecondFile;

	SecondFile.open("SecondFile.txt", ios::out | ios::app);

	if (SecondFile.is_open())
	{
		SecondFile << "Hi, this is a new line.\n";
		SecondFile << "Hi, this is another new line.\n";

		SecondFile.close();
	}
	return 0;
}