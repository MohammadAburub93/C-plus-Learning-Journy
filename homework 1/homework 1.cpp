#include <iostream>
using namespace std;

int main()
{
	string name, city, country;
	int age, monthly_salary, yearly_salary;
	char gender;
	bool marital_s;

	name = "Mohammad Aburub";
	age = 33;
	city = "Amman";
	country = "Jordan";
	monthly_salary = 1000;
	yearly_salary = monthly_salary * 12;
	gender = 'M';
	marital_s = true;

	cout << "******************************\n\n";
	cout << "Name: " << name << "." << endl;
	cout << "Age: " << age << " Years." << endl;
	cout << "City: " << city << "." << endl;
	cout << "Country: " << country << "." << endl;
	cout << "Monthly Salary: " << monthly_salary << endl;
	cout << "Yearly Salary: " << yearly_salary << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << marital_s << endl << endl;
	cout << "******************************\n\n";

}