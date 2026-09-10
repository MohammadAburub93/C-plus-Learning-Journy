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


char InvertCharacterCase(char Letter)
{
	return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
}

string InvertLettersCaseOfWord(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = InvertCharacterCase(Text[i]);
	}

	return Text;
}

int main()
{
	string Text = ReadString();

	cout << "\nString after inverting all letters case:\n";
	Text = InvertLettersCaseOfWord(Text);
	cout << Text << endl;

	system("pause>0");

	return 0;
}


