#include <iostream>
using namespace std;

struct p_info
{
	string name;
	string city;
	string country;
	short int age;
	float monthly_salary;
	char gender;
	bool marital_s;
};

int main()
{
	p_info person_1;

	cout << "Please enter your name?" << endl;
	cin >> person_1.name;

	cout << "Please enter your age in numbers?" << endl;
    cin >> person_1.age;

	cout << "Please enter your city name?" << endl;
	cin >> person_1.city;

	cout << "Please enter your country?" << endl;
	cin >> person_1.country;

	cout << "Please enter your monthly salary?" << endl;
	cin >> person_1.monthly_salary;

	cout << "Please enter your gender as M for male and F for female?" << endl;
	cin >> person_1.gender;

	cout << "Please enter your marital status as 1 for married and 0 for single?" << endl;
	cin >> person_1.marital_s;

	cout << "******************************\n\n";
	cout << "Name: " << person_1.name << "." << endl;
	cout << "Age: " << person_1.age << " Years." << endl;
	cout << "City: " << person_1.city << "." << endl;
	cout << "Country: " << person_1.country << "." << endl;
	cout << "Monthly Salary: " << person_1.monthly_salary << endl;
	cout << "Yearly Salary: " << person_1.monthly_salary * 12 << endl;
	cout << "Gender: " << person_1.gender << endl;
	cout << "Married: " << person_1.marital_s << endl << endl;
	cout << "******************************\n\n";

	return 0;

}