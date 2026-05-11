#include <iostream>
using namespace std;

int main()
{
	short int a, b, swapped_a, swapped_b;

	cout << "Please enter the first number a?" << endl;
	cin >> a;

	cout << "Please enter the second number b?" << endl;
	cin >> b;

	swapped_a = b;
	swapped_b = a;

	cout << "the first number you pick is: " << a << " ,and the second number is: " << b << endl;
	cout << "after swap the first number become: " << swapped_a << ", and the second number is: " << swapped_b << endl;

	return 0;

}