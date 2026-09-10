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

string LowercaseFirstLetterOfWord(string Text)
{
	bool IsFirstLetter = true;

	for (short i = 0; i < Text.length(); i++)
	{
		if (Text[i] != ' ' && IsFirstLetter)
		{
			Text[i] = tolower(Text[i]);
		}
		IsFirstLetter = (Text[i] == ' ' ? true : false);
	}

	return Text;
}

int main()
{
	string Text = ReadString();

	cout << "\nString after converging:\n\n";

	Text = LowercaseFirstLetterOfWord(Text);

	cout << Text << endl;

	system("pause>0");

	return 0;
}
