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

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
	{
		arrDestination[i] = arrSource[ArrayLength -1 -i];
	}	
}

int main()
{
	int arr1[100], arr2[100], ArrayLength;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr1, ArrayLength);

	CopyArrayInReverseOrder(arr1, arr2, ArrayLength);

	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr1, ArrayLength);

	cout << "\nArray 2 elements after copying array 1 in reverse order: ";
	PrintArrayElements(arr2, ArrayLength);


	return 0;
}