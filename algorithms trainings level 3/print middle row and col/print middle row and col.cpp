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

void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MidRow = Rows / 2;

	for (int i = 0; i < Cols; i++)
	{
		printf("%0*d   ", 2, arr[MidRow][i]);
	}
}

void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MidCol = Cols / 2;

	for (int i = 0; i < Rows; i++)
	{
		printf("%0*d   ", 2, arr[i][MidCol]);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int Mat1[3][3];

	FillMatrixWithRandomNumbers(Mat1, 3, 3);

	cout << "\nMatrix 1: \n\n";
	PrintMatrix(Mat1, 3, 3);

	cout << "\n\nMiddle row of matrix 1 is: : \n\n";
	PrintMiddleRowOfMatrix(Mat1, 3 , 3);

	cout << "\n\nMiddle col of matrix 1 is: : \n\n";
	PrintMiddleColOfMatrix(Mat1, 3, 3);

	system("pause>0");

	return 0;
}
