#include <iostream>
#include <cstdlib>
using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Please enter a number" << endl;
	cin >> Number;

	return Number;
}

void AddArrayElements(int Number, int arr[100], int &Arraylength)
{
	Arraylength++;
	arr[Arraylength - 1] = Number;
}


void FillArrayWithNumbersSimiDinamiclly(int arr[100], int& ArrayLength)
{
	bool AddMore = false;
	
	do
	{
		AddArrayElements(ReadNumber(), arr, ArrayLength);

		cout << "Do you want to add more numbers? [0]:No, [1]:Yes?\n";
		cin >> AddMore;

		cout << "\n\n";
			
	} while (AddMore);
}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[100], ArrayLength = 0;

	FillArrayWithNumbersSimiDinamiclly(arr, ArrayLength);

	cout << "\nArray length: ";
	cout << ArrayLength << endl;

	cout << "\nArray elements: ";
	PrintArrayElements(arr, ArrayLength);

	return 0;
}