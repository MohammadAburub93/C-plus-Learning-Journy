#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}

void PrintEachWordOfString(string Text)
{
	bool IsLetter = true;

	cout << "\nYour string words are: \n";

	for (short i = 0; i < Text.length(); i++)
	{
		if (Text[i] != ' ' && IsLetter)
		{
			cout << Text[i];
		}


		if (Text[i + 1] == ' ')
		{
			IsLetter = false;
			cout << endl;
		}
		else
			IsLetter = true;
	}
}

int main()
{

	PrintEachWordOfString(ReadString());


	system("pause>0");

	return 0;
}
