#include <iostream>
using namespace std;

void PrintNumbers(int N, int M)
{

	if (N >= M)
	{
		cout << N << endl;
		PrintNumbers(N - 1, M);
	}
}

int main()
{
	PrintNumbers(10,1);

	return 0;
}