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

bool IsVowel(char Letter)
{
	Letter = tolower(Letter);

	return (Letter == 'a' || Letter == 'e' || Letter == 'i' || Letter == 'o' || Letter == 'u' ? true : false);
}


int main()
{
	char Letter = ReadCharacter();

	if (IsVowel(Letter))
		cout << "\n\nYes letter " << Letter << " is vowel.\n";
	else
		cout << "\n\nNo letter " << Letter << " is not vowel.\n";


	system("pause>0");

	return 0;
}
