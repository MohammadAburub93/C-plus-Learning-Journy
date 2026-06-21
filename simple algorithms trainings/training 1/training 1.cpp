#include <iostream>

using namespace std;

void read_name(string& name)
{
	cout << "Please enter your name?" << endl;
	cin >> name;
}

void name_fun(string name)
{
	cout << "My name is " << name << endl;
}


int main()
{
	string name;

	read_name(name);
	name_fun(name);

	return 0;
}