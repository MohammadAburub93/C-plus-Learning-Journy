#include <iostream>

using namespace std;

struct emp_info
{
	int age;
	string d_license;
};

void read_emp_info(emp_info &person)
{
	cout << "please enter your age?\n";
	cin >> person.age;

	cout << "do you have a driver license? please enter true or false.\n";
	cin >> person.d_license;
}

bool user_is_valid(emp_info person)
{
	if (person.age > 21 and person.d_license == "true")
	{
		return true;
	}

	else
	{
		return false;
	}
}

int main()
{
	emp_info person;
	
	read_emp_info(person);

	if (user_is_valid(person))
	{
		cout << "Hired" << endl;
	}

	else
	{
		cout << "Rejected" << endl;
	}

	return 0;
}