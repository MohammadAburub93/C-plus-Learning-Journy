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
	for (int i = 0; i < ArrayLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}


void CalculateArraysSum(int arr1[100], int arr2[100],int arrSum[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
		arrSum[i] = arr1[i] + arr2[i];
}



int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], arr2[100], arrSum[100];

	int arrLength = ReadPositiveNumber("Please enter number of elments you want to add.");

	FillArrayWithRandomNumbers(arr1, arrLength);

	FillArrayWithRandomNumbers(arr2, arrLength);

	CalculateArraysSum(arr1, arr2, arrSum, arrLength);

	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr1, arrLength);

	cout << "\nArray 2 elements: ";
	PrintArrayElements(arr2, arrLength);

	cout << "\nSum of array1 and array2 elements: ";
	PrintArrayElements(arrSum, arrLength);

	return 0;
}