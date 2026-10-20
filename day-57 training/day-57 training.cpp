#include <iostream>

using namespace std;

class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;

public:
	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}

	int GetID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLasttName()
	{
		return _LastName;
	}

	string GetFullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetEmail(string Email)
	{
		_Email = Email;
	}

	string GetEmail()
	{
		return _Email;
	}

	void SetPhone(string Phone)
	{
		_Phone= Phone;
	}

	string GetPhone()
	{
		return _Phone;
	}

	void Print()
	{
		cout << "Info: " << endl;
		cout << "\n---------------------------\n";
		cout << "ID       :" << _ID << endl;
		cout << "FirstName:" << _FirstName << endl;
		cout << "LastName :" << _LastName << endl;
		cout << "Full Name:" << GetFullName() << endl;
		cout << "Email    :" << _Email << endl;
		cout << "Phone    :" << _Phone << endl;
		cout << "\n---------------------------\n";
	}

	void SendEmail(string Subject, string Content)
	{
		cout << "\nThe following message sent successfully to email: ";
		cout << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Content << endl;
	}

	void SendSMS(string Content)
	{
		cout << "\nThe following SMS sent successfully to phone: ";
		cout << _Phone << endl;
		cout << Content << endl;
	}

};

int main()
{
	clsPerson Person1(7, "Mohammad", "Aburub", "Mo@test.com", "0123456789");
	Person1.Print();

	Person1.SendEmail("Hi", "How are you?");
	Person1.SendSMS("How are you?");

	system("pause>0");

	return 0;
}