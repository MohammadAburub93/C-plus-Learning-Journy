#include <iostream>

using namespace std;

void name_fun(string name)
{
	cout << "My name is " << name << endl;
}


int main()
{
	string name;

	cout << "Please enter your name?" << endl;
	cin >> name;


	name_fun(name);

	return 0;
}