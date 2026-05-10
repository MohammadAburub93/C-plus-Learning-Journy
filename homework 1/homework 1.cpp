#include <iostream>
using namespace std;

int main()
{
	string name, city, country;
	short int age;
	float monthly_salary;
	char gender;
	bool marital_s;

	cout << "Please enter your name?" << endl;
	cin >> name;

	cout << "Please enter your age in numbers?" << endl;
    cin >> age;

	cout << "Please enter your city name?" << endl;
	cin >> city;

	cout << "Please enter your country?" << endl;
	cin >> country;

	cout << "Please enter your monthly salary?" << endl;
	cin >> monthly_salary;

	cout << "Please enter your gender as M for male and F for female?" << endl;
	cin >> gender;

	cout << "Please enter your marital status as 1 for married and 0 for single?" << endl;
	cin >> marital_s;

	cout << "******************************\n\n";
	cout << "Name: " << name << "." << endl;
	cout << "Age: " << age << " Years." << endl;
	cout << "City: " << city << "." << endl;
	cout << "Country: " << country << "." << endl;
	cout << "Monthly Salary: " << monthly_salary << endl;
	cout << "Yearly Salary: " << monthly_salary * 12 << endl;
	cout << "Gender: " << gender << endl;
	cout << "Married: " << marital_s << endl << endl;
	cout << "******************************\n\n";

	return 0;

}