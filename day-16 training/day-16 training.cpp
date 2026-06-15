#include <iostream>

using namespace std;

struct info
{
	string firstname;
	string lastname;
	int age;
	string phone;
};

void read_info(info &p_info)
{
	cout << "Please enter person first name?\n";
	cin >> p_info.firstname;

	cout << "Please enter person last name?\n";
	cin >> p_info.lastname;

	cout << "Please enter person age?\n";
	cin >> p_info.age;

	cout << "Please enter person phone?\n";
	cin >> p_info.phone;

}

void print_info(info p_info)
{
	cout << "\n****************************\n";
	cout << "First Name: " << p_info.firstname << endl;
	cout << "Last Name: " << p_info.lastname << endl;
	cout << "Age: " << p_info.age << " Years." << endl;
	cout << "Phone: " << p_info.phone << endl;
	cout << "****************************\n";

}

void read_persons_info(info p_info[2])
{
	read_info(p_info[0]);
	read_info(p_info[1]);
}

void print_persons_info(info p_info[2])
{
	print_info(p_info[0]);
	print_info(p_info[1]);
}


int main()
{
	info p_info[2];
	
	read_persons_info(p_info);
	print_persons_info(p_info);

	return 0;
}