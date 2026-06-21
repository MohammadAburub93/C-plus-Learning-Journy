#include <iostream>
#include <string>

using namespace std;

string read_name()
{
	string name;

	cout << "Please enter your name?" << endl;
	getline(cin, name);

	return name;
}

void name_fun(string name)
{
	cout << "My name is " << name << endl;
}


int main()
{
	name_fun(read_name());

	return 0;
}