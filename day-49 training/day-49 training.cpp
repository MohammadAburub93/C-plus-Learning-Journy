#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 50;

	cout << "a value   = " << a << endl;
	cout << "a address = " << &a << endl;

	int* p = &a;

	cout << "pointer value = " << p;

	cout << endl;

	p = &b;

	cout << "new pointer value = " << p << endl;

	return 0;
}