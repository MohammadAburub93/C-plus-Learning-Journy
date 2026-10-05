#include <iostream>

using namespace std;

class clsPerson
{
private:
	int _ID = 10;
	string _FirstName;
	string _LastName;

public:

	int ID()
	{
		return _ID;
	}

	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	void setLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return (_FirstName + " " + _LastName);
	}

};

int main()
{
	clsPerson Persson1;

	Persson1.setFirstName("Mohammad");
	Persson1.setLastName("Aburub");

	cout << "User ID: " << Persson1.ID() << endl;
	cout << "First Name: " << Persson1.FirstName() << endl;
	cout << "Last Name: " << Persson1.LastName() << endl;
	cout << "Full Name: " << Persson1.FullName() << endl;

	system("pause>0");

	return 0;

	
}