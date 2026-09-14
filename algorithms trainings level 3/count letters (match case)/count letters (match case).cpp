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

char ReadCharacter()
{
	char Letter;

	cout << "\nPlease enter a character? " << endl;
	cin >> Letter;

	return Letter;
}

char InvertCharacterCase(char Letter)
{
	return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
}

short CountLetterInWord(string Text, char Letter, bool MatchCase = true)
{
	short Counter = 0;

	for (short i = 0; i < Text.length(); i++)
	{
		if (MatchCase)
		{
			if (Text[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(Text[i]) == tolower(Letter))
				Counter++;
		}
		
	}

	return Counter;
}

int main()
{
	string Text = ReadString();
	char Letter = ReadCharacter();

	cout << "\nLetter \'" << Letter << "\' Count = " << CountLetterInWord(Text, Letter) << endl;
	cout << "\nLetter \'" << Letter << "\'" << " or \'" << InvertCharacterCase(Letter);
	cout << "\' Count = " << CountLetterInWord(Text, Letter, false) << endl;


	system("pause>0");

	return 0;
}