#include <iostream>

using namespace std;

void FillArrayWithNumbers(int arr[100], int& ArrayLength)
{
	ArrayLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

bool isPalindromeNumber(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - 1 - i])
			return false;
	}

	return true;
}


int main()
{
	int arr1[100], arr1Length = 0;

	FillArrayWithNumbers(arr1, arr1Length);


	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr1, arr1Length);

	if (isPalindromeNumber(arr1, arr1Length))
		cout << "\nYes, it's a palindrome array.\n";
	else
		cout << "\nNo, it's not  a palindrome array.\n";

	return 0;
}