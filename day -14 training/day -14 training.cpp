#include <iostream>
#include <string>

using namespace std;

struct strinfo
{
	string firstname;
	string lastname;
	int age;
	string phone;
};

void read_info(strinfo &info)
{
	cout << "Please enter your first name?\n";
	cin >> info.firstname;

	cout << "Please enter your last name?\n";
	cin >> info.lastname;

	cout << "Please enter your age?\n";
	cin >> info.age;

	cout << "Please enter your phone number?\n";
	cin >> info.phone;
}

void print_info(strinfo info)
{
	cout << "\n******************************\n";
	cout << "First Name: " << info.firstname << endl;
	cout << "Last Name: " << info.lastname << endl;
	cout << "Age: " << info.lastname << endl;
	cout << "Phone: " << info.phone << endl;

	cout << "\n******************************\n";
}

int main()
{
	strinfo person_1_info;
	read_info(person_1_info);
	print_info(person_1_info);

	strinfo person_2_info;
	read_info(person_2_info);
	print_info(person_2_info);

	return 0;
}
