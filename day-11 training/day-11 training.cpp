#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	string name, country;

	cout << "Please enter emplyee number?\n";
	cin >> number;

	cout << "Please enter name?\n";
	cin.ignore(1, '\n');
	getline(cin, name);

	cout << "Please enter country?\n";
	cin >> country;

	cout << "Number: " << number << ", Name: " << name << ", Country: " << country << endl;

	return 0;
}