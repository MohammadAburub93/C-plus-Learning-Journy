#include <iostream>

using namespace std;

void my_fun(int &num1)
{
	num1 = 7000;
	
	cout << "Number inside function became: " << num1 << endl;
}

int main()
{
	int num1;

	num1 = 1000;

	my_fun(num1);

	cout << "Number after calling the function became: " << num1 << endl;

	return 0;
}