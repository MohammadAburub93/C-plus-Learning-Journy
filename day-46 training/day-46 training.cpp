#include <iostream>
#include <vector>
using namespace std;

struct stEmployeeInfo
{
	string FirstName;
	string LastName;
	float Salary;
};

void ReadEmployeeInfo(vector <stEmployeeInfo>& vEmployees)
{
	stEmployeeInfo EmployeeToAdd;
	char AddMore = 'y';

	while (AddMore == 'y' || AddMore == 'Y')
	{
		cout << "Please enter the employee first name? " << endl;
		cin >> EmployeeToAdd.FirstName;

		cout << "\nPlease enter the employee last name? " << endl;
		cin >> EmployeeToAdd.LastName;

		cout << "\nPlease enter the employee Salary? " << endl;
		cin >> EmployeeToAdd.Salary;

		vEmployees.push_back(EmployeeToAdd);

		cout << "\nDo you want to add more employees? y/n" << endl;
		cin >> AddMore;
	}
}

void PrintEmployeeInfo(vector <stEmployeeInfo> &vEmployees)
{
	cout << "\n\nEmployees vector: \n\n";

	for (stEmployeeInfo& Emplyee : vEmployees)
	{
		cout << "FirstName: " << Emplyee.FirstName << endl;
		cout << "LastName: " << Emplyee.LastName << endl;
		cout << "Salary: " << Emplyee.Salary << "\n\n";
	}
}

int main()
{
	vector <stEmployeeInfo> vEmployees;
	
	ReadEmployeeInfo(vEmployees);
	PrintEmployeeInfo(vEmployees);

	return 0;
}