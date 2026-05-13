#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	short int num;

	cout << "Please enter your number N." << endl;
	cin >> num;

	cout << "The N^2 = " << floor(pow(num, 2)) << endl;
	cout << "The N^3 = " << floor(pow(num, 3)) << endl;
	cout << "The N^4 = " << floor(pow(num, 4)) << endl;

	return 0;
}