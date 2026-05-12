#include <iostream>
using namespace std;

int main()
{
	short A = 10;
	short B = A++;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

	B = ++A;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;

 
	return 0;
}