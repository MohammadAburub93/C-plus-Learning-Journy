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

void FillArrayWithOrderedNumbers(int arr[100], int& ArrayLength)
{
	cout << "Please enter number of elments you want to add.\n";
	cin >> ArrayLength;

	for (int i = 0; i < ArrayLength; i++)
		arr[i] = i + 1;
}

void ArrayShuffle(int arr[100], int ArrayLength)
{
	int Number = 0;
	bool Exist;

	for (int i = 0; i < ArrayLength; i++)
	{
		do
		{
			Number = RandomNumber(1, ArrayLength);
			Exist = false;
			for (int j = 0; j <= i; j++)
			{
				if (Number != arr[j])
				{
					continue;
				}
				else
				{
					Exist = true;
					break;
				}
			}
			
		} while (Exist);

		arr[i] = Number;
	}

}

void PrintArrayElements(int arr[100], int ArrayLength)
{
	for (int i = 0; i < ArrayLength; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	int arr[100], ArrayLength;

	srand((unsigned)time(NULL));

	FillArrayWithOrderedNumbers(arr, ArrayLength);

	cout << "\nArray elements before shuffle: ";
	PrintArrayElements(arr, ArrayLength);

	ArrayShuffle(arr, ArrayLength);

	cout << "\nArray elements after shuffle: ";
	PrintArrayElements(arr, ArrayLength);


	return 0;
}