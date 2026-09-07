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

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf("%0*d   ", 2, arr[i][j]);
		}

		cout << endl;
	}
}

int SumofMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}

	}

	return Sum;
}

bool AreMatricesEqual(int Mat1[3][3], int Mat2[3][3], short Rows, short Cols)
{
	return (SumofMatrix(Mat1, 3, 3) == SumofMatrix(Mat2, 3, 3));
}


int main()
{
	srand((unsigned)time(NULL));

	int Mat1[3][3], Mat2[3][3];

	FillMatrixWithRandomNumbers(Mat1, 3, 3);

	cout << "\nMatrix 1: \n\n";
	PrintMatrix(Mat1, 3, 3);

	FillMatrixWithRandomNumbers(Mat2, 3, 3);

	cout << "\nMatrix 2: \n\n";
	PrintMatrix(Mat2, 3, 3);

	if (AreMatricesEqual(Mat1, Mat2, 3, 3))
	{
		cout << "\nYes: Matrices are equal.\n";
	}
	else
	{
		cout << "\nNo: Matrices are not equal.\n";
	}

	system("pause>0");

	return 0;
}