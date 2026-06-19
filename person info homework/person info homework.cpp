#include <iostream>

using namespace std;

struct info
{
	string firstname;
	string lastname;
	int age;
	string phone;
};

void read_info(info& p_info)
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

void read_persons_info(info p_info[100], int &length)
{
	cout << "Please enter the number of people you want to make the card for?" << endl;
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		cout << "\nPlease enter Person's  " << i + 1 << " Info:\n\n";
		read_info(p_info[i]);
	}
	
}

void print_persons_info(info p_info[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << "\n\nPerson's " << i + 1 << " Info:\n";
		print_info(p_info[i]);
	}
	
}


int main()
{
	info p_info[100];
	int length;

	read_persons_info(p_info, length);
	print_persons_info(p_info, length);

	return 0;
}