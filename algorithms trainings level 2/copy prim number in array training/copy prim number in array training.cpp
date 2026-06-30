#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

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

enPrimeNotPrime CheckPrimeNumber(int number)
{
	int M = round(number / 2);

	for (int counter = 2; counter <= M; counter++)
	{
		if (number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void CopyPrimeNumbersInArray(int arrSource[100], int arrDestination[100], int arr1length, int &arr2length)
{
	arr2length = 0;
	for (int i = 0; i < arr1length; i++)
		if (CheckPrimeNumber(arrSource[i]) == enPrimeNotPrime::Prime)
		{
			arrDestination[arr2length] = arrSource[i];
			arr2length++;
		}
}



int main()
{
	int arr1[100], arr2[100], arr1Length, arr2Length;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr1, arr1Length);

	CopyPrimeNumbersInArray(arr1, arr2, arr1Length, arr2Length);

	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr1, arr1Length);

	cout << "\nPrime numbers in array 2 is: ";
	PrintArrayElements(arr2, arr2Length);

	return 0;
}