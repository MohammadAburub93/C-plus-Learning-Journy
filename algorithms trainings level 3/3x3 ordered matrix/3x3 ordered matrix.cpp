#include <iostream>

using namespace std;


void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
	short Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << "     ";
		}

		cout << endl;
	}
}

int main()
{

	int OrdMat[3][3];

	FillMatrixWithOrderedNumbers(OrdMat, 3, 3);

	cout << "\nThe following is a 3x3 ordered matrix: \n\n";
	PrintMatrix(OrdMat, 3, 3);

	system("pause>0");

	return 0;
}
