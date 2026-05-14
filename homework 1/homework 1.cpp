#include <iostream>
using namespace std;

enum gender { male, female };
enum m_status { single, married };
enum fav_color { red, yellow, green, blue, orange };

struct p_info
{
	string name;
	string city;
	string country;
	short int age;
	float monthly_salary;
	gender my_gender;
	m_status marital_s;
	fav_color my_color;
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

	person_1.my_gender = gender::male;
	person_1.marital_s = m_status::single;
	person_1.my_color = fav_color::blue;

	cout << "******************************\n\n";
	cout << "Name: " << person_1.name << "." << endl;
	cout << "Age: " << person_1.age << " Years." << endl;
	cout << "City: " << person_1.city << "." << endl;
	cout << "Country: " << person_1.country << "." << endl;
	cout << "Monthly Salary: " << person_1.monthly_salary << endl;
	cout << "Yearly Salary: " << person_1.monthly_salary * 12 << endl;
	cout << "Gender: " << person_1.my_gender << endl;
	cout << "Married: " << person_1.marital_s << endl;
	cout << "Favorate color: " << person_1.my_color << endl << endl;
	cout << "******************************\n\n";

	return 0;

}