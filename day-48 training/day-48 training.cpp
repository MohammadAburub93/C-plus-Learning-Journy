#include <iostream>
using namespace std;

void Function1(int &x)
{
	x++;
}

int main()
{
	int a = 10;

	cout << a << endl;
	cout << &a << endl;

	return 0;
}