#include <iostream>
using namespace std;

int main()
{
	short int age;

	cout << "Please enter your age?\n";
	cin >> age;

	cout << "After 5 years you will be " << age + 5 << " years old.";

	return 0;
}