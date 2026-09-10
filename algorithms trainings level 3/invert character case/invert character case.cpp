#include <iostream>
#include <string>
#include <cctype>

using namespace std;

char ReadCharacter()
{
	char Letter;

	cout << "Please enter a character? " << endl;
	cin >> Letter;

	return Letter;
}

char InvertCharacterCase(char Letter)
{
	return (isupper(Letter) ? tolower(Letter) : toupper(Letter));
}

int main()
{
	char Letter = ReadCharacter();

	cout << "\nChar after inverting case:\n";
	Letter = InvertCharacterCase(Letter);
	cout << Letter << endl;

	system("pause>0");

	return 0;
}

