#include <iostream>

using namespace std;


int read_user_age()
{
	int age;
	cout << "Please enter your age?\n";
	cin >> age;

	return age;
}

bool validate_number_in_range(int number, int from, int to)
{
	return (number >= from && number <= to);
}

void print_age_validity(int age)
{
	if (validate_number_in_range(age, 18, 45))
		cout << "Valid Age!" << endl;
	else
		cout << "Invalid Age!" << endl;
}

int main()
{
	
	print_age_validity(read_user_age());

	return 0;
}