#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream SecondFile;

	SecondFile.open("SecondFile.txt", ios::out);

	if (SecondFile.is_open())
	{
		SecondFile << "This is the second file I create.\n";
		SecondFile << "I created it in write mode.\n";

		SecondFile.close();
	}
	return 0;
}