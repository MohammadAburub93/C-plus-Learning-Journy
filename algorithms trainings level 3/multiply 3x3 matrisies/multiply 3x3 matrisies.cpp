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
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void MultiplyMatrix(int arr1[3][3], int arr2[3][3], int arr3[3][3],  short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr3[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			 printf("%0*d     ", 2,  arr[i][j]);
		}

		cout << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Mat1[3][3], Mat2[3][3], Mul[3][3];

	FillMatrixWithRandomNumbers(Mat1, 3, 3);

	cout << "\nMatrix 1: \n\n";

	PrintMatrix(Mat1, 3, 3);

	FillMatrixWithRandomNumbers(Mat2, 3, 3);

	cout << "\nMatrix 2: \n\n";

	PrintMatrix(Mat2, 3, 3);

	MultiplyMatrix(Mat1, Mat2, Mul, 3, 3);

	cout << "\nResult: \n\n";

	PrintMatrix(Mul, 3, 3);

	system("pause>0");

	return 0;
}