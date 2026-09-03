#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}

int CalculateColSum(int arr[3][3], short ColNum, short Rows)
{
	int ColSum = 0;

	for (short i = 0; i < Rows; i++)
	{
		ColSum += arr[i][ColNum];
	}
	return ColSum;

}

void PrintMatrixColsSum(int arr[3][3], short Rows, short Cols)
{
	cout << "\nThe following is the sum of each column in the matrix:\n";

	for (short i = 0; i < Cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << CalculateColSum(arr, i, Rows) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix:\n";

	PrintMatrix(arr, 3, 3);

	PrintMatrixColsSum(arr, 3, 3);


	return 0;
}