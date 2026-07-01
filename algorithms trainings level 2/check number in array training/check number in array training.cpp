#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message)
{
	int Number;

	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

void FillArrayWithRandomNumbers(int arr[100], int& ArrayLength)
{
	cout << "Please enter number of elments you want to add.\n";
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++)
		arr[i] = RandomNumber(1, 100);
}

short CheckNumberPositionInArray(int arr[100], int ArrayLength, int NumberToCheck)
{
	for (int i = 0; i < ArrayLength; i++)
		if (arr[i] == NumberToCheck)
			return i;

	return -1;

}

bool isNumberFound(int arr[100], int ArrayLength, int NumberToCheck)
{
	return (CheckNumberPositionInArray(arr, ArrayLength, NumberToCheck) != -1);
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void PrintNumberStatus(int arr[100], int ArrayLength, int NumberToCheck)
{
	cout << "The number you are looking for is: " << NumberToCheck << endl;

	if (isNumberFound(arr, ArrayLength, NumberToCheck))
	{
		cout << "Yes, the number is found :-)\n";
	}
	else
	{
		cout << "No, the number is not found :-(\n";
	}
}


int main()
{
	int arr[100], ArrayLength = 0, NumberToCheck = 0;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr, ArrayLength);

	PrintArrayElements(arr, ArrayLength);

	NumberToCheck = ReadPositiveNumber("Please enter a number to search for?");

	PrintNumberStatus(arr, ArrayLength, NumberToCheck);


	return 0;
}