#include <iostream>
#include <cstdlib>
using namespace std;

enum enCharacterType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}


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

string GetWord(enCharacterType CharacterTypr, short Length)
{
	string word = "";

	for (int j = 1; j <= Length; j++)
	{
		word = word + RandomCharacter(enCharacterType::CapitalLetter);
	}

	return word;
}

string GetKey()
{
	string key = "";

	for (int i = 1; i <= 4; i++)
	{
		if (i <= 3)
			key = key + GetWord(enCharacterType::CapitalLetter, 4) + "-";
		else
			key = key + GetWord(enCharacterType::CapitalLetter, 4);

	}

	return key;
}


void FillArrayWithRandomKeys(string arr[100], int& ArrayLength)
{
	cout << "Please enter number of keys you want to add.\n";
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++)
		arr[i] = GetKey();
}

void PrintArrayElements(string arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << "Array [" << i + 1 << "] : " << arr[i] << endl;
	cout << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	string arr[100];
	int ArrayLength = 0;

	FillArrayWithRandomKeys(arr, ArrayLength);

	PrintArrayElements(arr, ArrayLength);

	return 0;
}