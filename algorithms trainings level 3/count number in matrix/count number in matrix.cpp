#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int ReadNumber(string message)
{
	int Number = 0;

	cout << message << endl;
	cin >> Number;

	return Number;
}

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


short CountNumberInMatrix(int Mat1[3][3], short Rows, short Cols, int NumToCheck)
{
	short Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (Mat1[i][j] == NumToCheck)
			{
				Counter++;
			}
		}
	}

	return Counter;
}


int main()
{
	srand((unsigned)time(NULL));

	int Mat1[3][3];

	int NumToCheck = ReadNumber("Enter the number to check in matrix?");

	FillMatrixWithRandomNumbers(Mat1, 3, 3);

	cout << "\nMatrix 1: \n\n";
	PrintMatrix(Mat1, 3, 3);

	cout << "\nNumber " << NumToCheck << " count in matrix is: " << CountNumberInMatrix(Mat1, 3, 3, NumToCheck);
	cout << endl;

	return 0;
}
