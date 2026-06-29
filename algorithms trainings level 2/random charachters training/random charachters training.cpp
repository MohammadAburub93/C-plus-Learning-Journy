#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

enum enCharacterType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

char RandomCharacter(enCharacterType CharType)
{
	switch (CharType)
	{
	case enCharacterType::SmallLetter:
		return char(RandomNumber(97, 122));
	case enCharacterType::CapitalLetter:
		return char(RandomNumber(65, 90));
	case enCharacterType::SpecialCharacter:
		return char(RandomNumber(33, 47));
	case enCharacterType::Digit:
		return char(RandomNumber(48, 57));
	}

}
int main()
{
	srand((unsigned)time(NULL));

	cout << RandomCharacter(enCharacterType::SmallLetter) << endl;
	cout << RandomCharacter(enCharacterType::CapitalLetter) << endl;
	cout << RandomCharacter(enCharacterType::SpecialCharacter) << endl;
	cout << RandomCharacter(enCharacterType::Digit) << endl;



	return 0;
}