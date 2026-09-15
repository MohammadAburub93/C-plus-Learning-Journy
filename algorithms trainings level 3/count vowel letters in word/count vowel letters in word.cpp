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

short CountVowels(string Text)
{
	short Counter = 0;

	for (short i = 0; i < Text.length(); i++)
	{
		if (IsVowel(Text[i]))
		{
			Counter++;
		}
	}

	return Counter;
}

int main()
{
	string Text = ReadString();

	cout << "\nNumber of vowels is: " << CountVowels(Text) << endl;


	system("pause>0");

	return 0;
}