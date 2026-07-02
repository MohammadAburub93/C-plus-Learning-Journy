#include <iostream>

using namespace std;

void FillArrayWithNumbers(int arr[100], int &ArrayLength)
{
	ArrayLength = 10;
	arr[0] = 10;
	arr[1] = 10;
	arr[2] = 10;
	arr[3] = 50;
	arr[4] = 50;
	arr[5] = 70;
	arr[6] = 70;
	arr[7] = 70;
	arr[8] = 70;
	arr[9] = 90;
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}


void AddArrayElements(int Number, int arr[100], int& Arraylength)
{
	Arraylength++;
	arr[Arraylength - 1] = Number;
}


short CheckNumberPositionInArray(int arr[100], int ArrayLength, int NumberToCheck)
{
	for (int i = 0; i < ArrayLength; i++)
		if (arr[i] == NumberToCheck)
			return i;

	return -1;

}

bool isNumberFound(int arr[100], int ArrayLength, int NumberToCheck)
{
	return (CheckNumberPositionInArray(arr, ArrayLength, NumberToCheck) != -1);
}


void CopyDistinctNumbers(int arrSource[100], int arrDestination[100], int &arrDestinationLength)
{
	for (int i = 0; i < 10; i++)
	{
		if (!isNumberFound(arrDestination, arrDestinationLength, arrSource[i]))
		{
			AddArrayElements(arrSource[i], arrDestination, arrDestinationLength);
		}	

	} 

}

int main()
{
	int arr1[100], arr2[100], arr1Length = 0, arr2Length = 0;

	FillArrayWithNumbers(arr1, arr1Length);

	CopyDistinctNumbers(arr1, arr2, arr2Length);

	cout << "\nArray 1 elements: ";
	PrintArrayElements(arr1, arr1Length);

	cout << "\nArray 2 distinct elements: ";
	PrintArrayElements(arr2, arr2Length);

	return 0;
}
