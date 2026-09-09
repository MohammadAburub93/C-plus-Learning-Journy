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

void PrintFirstLetterOfWord(string Text)
{
	bool IsFirstLetter = true;

	cout << "\nFirst Letters of this string: \n";

	for (short i = 0; i < Text.length(); i++)
	{
		if (Text[i] != ' ' && IsFirstLetter)
		{
			cout << Text[i] << endl;
		}
		IsFirstLetter = (Text[i] == ' ' ? true : false);
	}
}

int main()
{
	
	PrintFirstLetterOfWord(ReadString());


	system("pause>0");

	return 0;
}