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

void RemoveRecordFromVector(string FileName, string Record)
{
	vector<string> vFileContent;

	LoadDataFromFileToVector(FileName, vFileContent);

	for (string& Item : vFileContent)
	{
		if (Item == Record)
		{
			Item = "";
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
	cout << "File content before deletion\n";

	PrintFileContent("SecondFile.txt");

	
	RemoveRecordFromVector("SecondFile.txt", "Ali");

	cout << "\nFile content After deletion\n";

	PrintFileContent("SecondFile.txt");

	return 0;
}