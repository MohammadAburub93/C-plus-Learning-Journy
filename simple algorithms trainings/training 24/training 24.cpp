#include <iostream>

using namespace std;

void read_age(int &age)
{
	cout << "Please enter your age?\n";
	cin >> age;
}

int main()
{
	int age;
	
	read_age(age);

	if (age >= 18 && age <= 45)
	{
		cout << "Valid Age!" << endl;
	}
	else
	{
		cout << "Invalid Age!" << endl;
	}

	return 0;
}