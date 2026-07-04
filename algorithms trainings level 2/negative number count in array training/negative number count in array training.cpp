#include <iostream>
#include <cstdlib>
using namespace std;

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
		arr[i] = RandomNumber(-100, 100);
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int NegativeNumbersCount(int arr[100], int ArrayLength)
{
	int NegativeCount = 0;
	for (int i = 0; i < ArrayLength; i++)
		if (arr[i] < 0)
			NegativeCount++;

	return NegativeCount;
}

int main()
{
	int arr[100], ArrayLength = 0;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr, ArrayLength);

	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr, ArrayLength);

	cout << "Negative numbers count is: " << NegativeNumbersCount(arr, ArrayLength) << endl;;


	return 0;
}