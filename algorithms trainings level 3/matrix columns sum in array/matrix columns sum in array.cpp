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
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}

int CalculateColSum(int arr[3][3], short ColNum, short Rows)
{
	int ColSum = 0;

	for (int i = 0; i < Rows; i++)
	{
		ColSum += arr[i][ColNum];
	}
	return ColSum;

}

void FillArraySum(int arrSum[3], int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Cols; i++)
	{
		arrSum[i] = CalculateColSum(arr, i, Rows);
	}
}

void PrintMatrixColsSum(int arrSum[3], short Cols)
{
	cout << "\nThe following is the sum of each col in the matrix:\n";

	for (int i = 0; i < Cols; i++)
	{
		cout << "Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrSum[3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix:\n";

	PrintMatrix(arr, 3, 3);

	FillArraySum(arrSum, arr, 3, 3);

	PrintMatrixColsSum(arrSum, 3);


	return 0;
}

