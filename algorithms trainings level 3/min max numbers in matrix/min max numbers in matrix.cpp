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
			arr[i][j] = RandomNumber(0, 100);
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

int MinNumberInMatrix(int Mat1[3][3], short Rows, short Cols)
{
	int MinNum = Mat1[0][0];

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Mat1[i][j] < MinNum)
			{
				MinNum = Mat1[i][j];
			}
		}
	}

	return MinNum;
}

int MaxNumberInMatrix(int Mat1[3][3], short Rows, short Cols)
{
	int MaxNum = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Mat1[i][j] > MaxNum)
			{
				MaxNum = Mat1[i][j];
			}
		}
	}

	return MaxNum;
}


int main()
{
	srand((unsigned)time(NULL));

	int Mat1[3][3];


	FillMatrixWithRandomNumbers(Mat1, 3, 3);

	cout << "\nMatrix 1: \n\n";
	PrintMatrix(Mat1, 3, 3);

	cout << "\n\nMinimum number is: ";
	cout << MinNumberInMatrix(Mat1, 3, 3);

	cout << "\n\nMaximum number is: ";
	cout << MaxNumberInMatrix(Mat1, 3, 3);

	cout << endl;

	return 0;
}
