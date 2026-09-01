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

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
	fstream File;

	File.open(FileName, ios::out);

	if (File.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line != "") {

				File << Line << endl;
			}

		}

		File.close();
	}
}

void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
	vector<string> vFileContent;

	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Item : vFileContent)
	{
		if (Item == Record)
		{
			Item = UpdateTo;
		}
	}

	SaveVectorToFile("SecondFile.txt", vFileContent);
}


void PrintFileContent(string FileName)
{
	fstream File;

	File.open(FileName, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			cout << Line << endl;
		}

		File.close();
	}
}

int main()
{
	cout << "File content before update\n";

	PrintFileContent("SecondFile.txt");

	
	UpdateRecordInFile("SecondFile.txt", "Ali", "Omar");

	cout << "\nFile content After update\n";

	PrintFileContent("SecondFile.txt");

	return 0;
} 