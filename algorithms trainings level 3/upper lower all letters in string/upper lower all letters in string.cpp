#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string ReadString()
{
	string Text;

	cout << "Please enter your string? " << endl; Text;
	getline(cin, Text);

	return Text;
}

string LowercaseLettersOfWord(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = tolower(Text[i]);
	}

	return Text;
}

string UppercaseLettersOfWord(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = toupper(Text[i]);
	}

	return Text;
}

int main()
{
	string Text = ReadString();

	cout << "\nString after upper:\n\n";

	Text = UppercaseLettersOfWord(Text);

	cout << Text << endl;

	cout << "\nString after lower:\n\n";

	Text = LowercaseLettersOfWord(Text);

	cout << Text << endl;

	system("pause>0");

	return 0;
}
