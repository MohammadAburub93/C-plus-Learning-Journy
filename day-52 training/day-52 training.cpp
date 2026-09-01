#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
	fstream File;

	File.open(FileName, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			vFileContent.push_back(Line);
		}

		File.close();
	}
}


int main()
{
	vector<string> vFileContent;

	LoadDataFromFileToVector("SecondFile.txt", vFileContent);

	for (string &Line : vFileContent)
	{
		cout << Line << endl;
	}

	return 0;
}