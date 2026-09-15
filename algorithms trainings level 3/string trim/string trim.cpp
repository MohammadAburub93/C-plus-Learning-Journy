#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}

string TrimLeft(string Text)
{
	short PosToCheck = 0;

	while (Text.at(PosToCheck) == ' ')
	{
		PosToCheck++;
	}

	if (PosToCheck != 0)
		Text.erase(0, PosToCheck);

	return Text;
}

string TrimRight(string Text)
{
	short PosToCheck = Text.length() - 1;

	while (Text.at(PosToCheck) == ' ')
	{
		PosToCheck--;
	}

	if (PosToCheck != (Text.length() - 1))
		Text.erase(PosToCheck + 1, (Text.length() - 1));

	return Text;
}

string TrimString(string Text)
{
	return (TrimLeft(TrimRight(Text)));
}


int main()
{
	string Text = ReadString();

	cout << "\n\nString      = " << Text << endl;
	cout << "Trim Left   = " << TrimLeft(Text) << endl;
	cout << "Trim Right  = " << TrimRight(Text) << endl;
	cout << "Trim        = " << TrimString(Text) << endl;

	system("pause>0");

	return 0;
}
