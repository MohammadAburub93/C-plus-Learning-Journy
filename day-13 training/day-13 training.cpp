#include <iostream>
#include <string>

using namespace std;

short x = 20, y = 30;

void fun_1()
{
	short m = 200;

	cout << "local valur of m in function is: " << m << endl;
}

int main()
{
	int mult;
	mult = ::x * ::y;

	fun_1();

	cout << "The multiplication value of the global variabels is: " << mult << endl;

	return 0;
}