#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

void AddArrayElements(int Number, int arr[100], int& Arraylength)
{
	Arraylength++;
	arr[Arraylength - 1] = Number;
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

void CopyOddNumbersToArray(int arrSource[100], int arrDestination[100], int ArraySourceLength, int& ArrayDestinationlength)
{
	for (int i = 0; i < ArraySourceLength; i++)
		if (arrSource[i] % 2 != 0)
			AddArrayElements(arrSource[i], arrDestination, ArrayDestinationlength);
}

int main()
{
	int arr1[100], arr2[100], Array1Length = 0, Array2Length = 0;

	srand((unsigned)time(NULL));

	FillArrayWithRandomNumbers(arr1, Array1Length);

	CopyOddNumbersToArray(arr1, arr2, Array1Length, Array2Length);

	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr1, Array1Length);

	cout << "\nArray 2 odd numbers: ";
	PrintArrayElements(arr2, Array2Length);

	return 0;
}
