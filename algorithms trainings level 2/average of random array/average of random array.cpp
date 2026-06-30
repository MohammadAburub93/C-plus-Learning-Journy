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

float NumbersAverageInArray(int arr[100], int ArrayLength)
{
	int sum = 0;

	for (int i = 1; i < ArrayLength; i++)
		sum += arr[i];

	return (float)sum / ArrayLength;
}

int main()
{
	int arr[100], ArrayLength;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr, ArrayLength);

	cout << "\nOriginal array: ";
	PrintArrayElements(arr, ArrayLength);

	cout << "\nAverage of numbers is: ";
	cout << NumbersAverageInArray(arr, ArrayLength) << endl;

	return 0;
}