#include <iostream>
#include <string>

using namespace std;

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

	return 0;
}