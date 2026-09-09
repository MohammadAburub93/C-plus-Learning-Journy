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
			arr[i][j] = RandomNumber(0, 1);
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

bool IsPalindromeMatrix(int Mat1[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols / 2; j++)
		{
			if (Mat1[i][j] != Mat1[i][Cols - 1 - j])
			{
				return false;
			}
		}
	}

	return true;
}


int main()
{
	srand((unsigned)time(NULL));

	int Mat1[3][3]{ {1, 0, 1}, {4, 0, 4}, {5, 0, 5} };

	//FillMatrixWithRandomNumbers(Mat1, 3, 3);

	cout << "\nMatrix 1: \n\n";
	PrintMatrix(Mat1, 3, 3);

	if (IsPalindromeMatrix(Mat1, 3, 3))
	{
		cout << "\nYes: Matrix is Palindrome\n";
	}
	else
	{
		cout << "\nNo: Matrix is not Palindrome\n";
	}

	system("pause>0");

	return 0;
}
