#include <iostream>
#include <string>

using namespace std;

int x = 300;

void my_function_1()
{
	int x = 500;

	cout << "The value of x inside function is: " << x << endl;
}

int main()
{
	int x = 10;

	cout << "The local value of x inside main is: " << x << endl;

	my_function_1();

	::x = 7000;

	cout << "The global value of x is: " << ::x << endl;

	return 0;
}