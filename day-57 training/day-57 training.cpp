#include <iostream>

using namespace std;

class clsEmployee
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Title;
	string _Email;
	string _Phone;
	float _Salary;
	string _Department;

public:
	clsEmployee(int ID, string FirstName, string LastName,string Title, string Email, string Phone, float Salary, string Department)
	{
		_ID = ID;
		_FirstName = FirstName;
		_LastName = LastName;
		_Title = Title;
		_Email = Email;
		_Phone = Phone;
		_Salary = Salary;
		_Department = Department;
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

	void SetTitle(string Title)
	{
		_Title= Title;
	}

	string GetTitle()
	{
		return _Title;
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

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float GetSalary()
	{
		return _Salary;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string GetDepartment()
	{
		return _Department;
	}

	void Print()
	{
		cout << "\nEmployee Info: " << endl;
		cout << "\n---------------------------\n";
		cout << "ID        :" << _ID << endl;
		cout << "FirstName :" << _FirstName << endl;
		cout << "LastName  :" << _LastName << endl;
		cout << "Full Name :" << GetFullName() << endl;
		cout << "Title     :" << _Title << endl;
		cout << "Email     :" << _Email << endl;
		cout << "Phone     :" << _Phone << endl;
		cout << "Salary    :" << _Salary << endl;
		cout << "Department:" << _Department << endl;
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
	clsEmployee Employee1(7, "Mohammad", "Aburub", "Manager", "Mo@test.com", "0123456789", 5000, "Software Engineering");
	Employee1.Print();

	Employee1.SendEmail("Hi", "How are you?");
	Employee1.SendSMS("How are you?");

	system("pause>0");

	return 0;
}