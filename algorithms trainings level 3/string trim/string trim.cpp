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
	for (short i = 0; i < Text.length(); i++)
	{
		if (Text[i] != ' ')
			return Text.substr(i, Text.length() - i);
	}
	return "";
}

string TrimRight(string Text)
{
	for (short i = Text.length() - 1; i >= 0; i--)
	{
		if (Text[i] != ' ')
			return Text.substr(0, i + 1);
	}
	return "";
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
