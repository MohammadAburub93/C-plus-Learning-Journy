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
			arr[i][j] = RandomNumber(0, 10);
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

bool IsNumberExistInMatrix(int Mat1[3][3], short Rows, short Cols, int NumToCheck)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Mat1[i][j] == NumToCheck)
			{
				return true;
			}
		}
	}

	return false;
}

void PrintIntersectedNumbers(int Mat1[3][3], int Mat2[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (IsNumberExistInMatrix(Mat1, 3, 3, Mat2[i][j]))
			{
				cout << Mat2[i][j] << "    ";
			}
		}
	}

	cout << endl;
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

	cout << "\n\nIntersected numbers are: \n\n";
	PrintIntersectedNumbers(Mat1, Mat2, 3, 3);

	return 0;
}
