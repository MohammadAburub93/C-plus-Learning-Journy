#include <iostream>
#include <string>

using namespace std;

struct strFullName
{
	string firstname;
	string lastname;
};

strFullName read_full_name()
{
	strFullName info;

	cout << "Please enter your firstname?" << endl;
	getline(cin, info.firstname);

	cout << "Please enter your lastname?" << endl;
	getline(cin, info.lastname);

	return info;
}

string get_full_name(strFullName info)
{
	string full_name = "";

	full_name = info.firstname + " " + info.lastname;

	return full_name;
}

void print_full_name(string full_name)
{
	cout << "Your name is: " << full_name << endl;
}


int main()
{
	print_full_name(get_full_name(read_full_name()));

	return 0;
}