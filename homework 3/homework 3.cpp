#include <iostream>
using namespace std;


void age_calc()
{
	short int age;

	cout << "Please enter your age?\n";
	cin >> age;

	cout << "After 5 years you will be " << age + 5 << " years old.";
}
int main()
{
	age_calc();

	return 0;
}