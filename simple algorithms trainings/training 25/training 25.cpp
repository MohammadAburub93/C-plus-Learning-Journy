#include <iostream>
using namespace std;

int read_user_age()
{
	int age;

	cout << "Please enter your age between 18 and 45" << endl;
	cin >> age;

	return age;
}

bool check_number_in_range(int number, int from, int to)
{
	return (number >= from && number <= to);
}

int read_age_until_between(int from, int to)
{
	int age = 0;

	do
	{
		age = read_user_age();

	} while (!check_number_in_range(age, from, to));

	return age;
}

void print_age_validity_result(int age)
{
	if (check_number_in_range(age, 18, 45))
	{
		cout << "Your age is " << age << endl;
	}
	else
		cout << "Age " << age << " is a invalid age!" << endl << endl;
}

int main()
{
		print_age_validity_result(read_age_until_between(18, 45));

	return 0;
}
