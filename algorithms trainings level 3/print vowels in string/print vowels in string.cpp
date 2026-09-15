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

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);

	return (Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u' ? true : false);
}

void PrintVowelsInString(string Text)
{
	cout << "\nVowels in string are: ";

	for (short i = 0; i < Text.length(); i++)
	{
		if (IsVowel(Text[i]))
			cout << Text[i] << "   ";
	}
}

int main()
{
	string Text = ReadString();

	PrintVowelsInString(Text);

	system("pause>0");

	return 0;
}
