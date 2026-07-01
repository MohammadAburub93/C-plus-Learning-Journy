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

int CheckNumberPositionInArray(int arr[100], int ArrayLength, int NumberToCheck)
{
	for (int i = 0; i < ArrayLength; i++)
		if (arr[i] == NumberToCheck)
			return i;
		
	return -1;
		
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void PrintNumberposition(int arr[100], int ArrayLength, int NumberToCheck)
{
	short index = CheckNumberPositionInArray(arr, ArrayLength, NumberToCheck);

	cout << "The number you are looking for is: " << NumberToCheck << endl;

	if ( index == -1)
	{	
		cout << "The number is not found :-(\n";
	}
	else
	{
		cout << "The number found at position: " << index << endl;
		cout << "The number order in the array is: " << index + 1 << endl;
	}
}


int main()
{
	int arr[100], ArrayLength = 0, NumberToCheck = 0;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr, ArrayLength);

	PrintArrayElements(arr, ArrayLength);

	NumberToCheck = ReadPositiveNumber("Please enter a number to search for?");

	PrintNumberposition(arr, ArrayLength, NumberToCheck);

	
	return 0;
}