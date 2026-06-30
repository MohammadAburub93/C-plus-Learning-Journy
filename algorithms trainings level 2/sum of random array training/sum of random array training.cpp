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

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int NumbersSumInArray(int arr[100], int ArrayLength)
{
	int Sum = 0;

	for (int i = 1; i < ArrayLength; i++)
			Sum = Sum + arr[i];

	return Sum;
}

int main()
{
	int arr[100], ArrayLength;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr, ArrayLength);

	cout << "\nOriginal array: ";
	PrintArrayElements(arr, ArrayLength);

	cout << "\nSum of all numbers is: ";
	cout << NumbersSumInArray(arr, ArrayLength) << endl;

	return 0;
}