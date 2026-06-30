#include <iostream>

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

void ReadArrayElements(int arr[100], int &ArrayLength)
{
	cout << "Please enter number of elments you want to add.\n";
	cin >> ArrayLength;

	cout << "\nEnter array elements: \n";

	for (int i = 0; i < ArrayLength; i++)
	{
		cout << "Elemet [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

int ElementRepeationCount(int arr[100], int ArrayLength, int ValueToCheck)
{
	short count = 0;

	for (int i = 0; i < ArrayLength; i++)
	{
		if (arr[i] == ValueToCheck)
			count++;
	}

	return count;
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	cout << "\nOriginal array: ";
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[100], ArrayLength, ValueToCheck; 

	ReadArrayElements(arr, ArrayLength);

	ValueToCheck = ReadPositiveNumber("Please enter the number you want to check");

	PrintArrayElements(arr, ArrayLength);

	cout << "\n\n" << ValueToCheck << " is repeated ";
	cout << ElementRepeationCount(arr, ArrayLength, ValueToCheck);
	cout << " time(s)." << endl;


	return 0;
}