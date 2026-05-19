#include <iostream>

using namespace std;

void person_info(string name, int age)
{
	cout << "Your name is " << name << endl;
	cout << "and your age is " << age << endl;
}

int main()
{
	string name;
	int age;

	cout << "Please enter your name?" << endl;
	cin >> name;

	cout << "Please enter your age" << endl;
	cin >> age;

	person_info(name, age);

	return 0;
}