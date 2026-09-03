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

int CalculateRowSum(int arr[3][3], short RowNum, short Cols)
{
	int RowSum = 0;

	for (int i = 0; i < Cols; i++)
	{
		RowSum += arr[RowNum][i];
	}
	return RowSum;

}

void PrintMatrixRowsSum(int arr[3][3], short Rows, short Cols)
{
	cout << "\nThe following is the sum of each rowin the matrix:\n";

	for (int i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << CalculateRowSum(arr, i, Cols) << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix:\n";
	
	PrintMatrix(arr, 3, 3);

	PrintMatrixRowsSum(arr, 3, 3);


	return 0;
}