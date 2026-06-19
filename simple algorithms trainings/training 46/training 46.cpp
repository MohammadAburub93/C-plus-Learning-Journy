#include <iostream>
using namespace std;

void print_char()
{
	for (short i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	print_char();

	return 0;
}