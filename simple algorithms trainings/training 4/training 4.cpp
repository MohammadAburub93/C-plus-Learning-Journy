#include <iostream>

using namespace std;

struct emp_info
{
	int age;
	bool has_d_license;
};

emp_info read_emp_info()
{
	emp_info person;

	cout << "please enter your age?\n";
	cin >> person.age;

	cout << "do you have a driver license? please enter 1 for yes and 0 for no.\n";
	cin >> person.has_d_license;

	return person;
}

bool is_accepted(emp_info person)
{
	return (person.age > 21 && person.has_d_license);
}

void print_result(emp_info person)
{
	if (is_accepted(person))

		cout << "\nHired" << endl;
	else
		cout << "\nRejected" << endl;
}

int main()
{	
	print_result(read_emp_info());

	return 0;
}