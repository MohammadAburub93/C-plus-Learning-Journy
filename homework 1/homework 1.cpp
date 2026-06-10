#include <iostream>
using namespace std;

enum gender { male, female };
enum m_status { single, married };
enum fav_color { red, yellow, green, blue, orange, purple, indigo, cyan };

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

void read_info(p_info &info)
{

	cout << "Please enter your name?" << endl;
	cin >> info.name;

	cout << "Please enter your age in numbers?" << endl;
	cin >> info.age;

	cout << "Please enter your city name?" << endl;
	cin >> info.city;

	cout << "Please enter your country?" << endl;
	cin >> info.country;

	cout << "Please enter your monthly salary?" << endl;
	cin >> info.monthly_salary;

	info.my_gender = gender::male;
	info.marital_s = m_status::single;
	info.my_color = fav_color::blue;

	
}

void print_info(p_info info)
{
	cout << "******************************\n\n";
	cout << "Name: " << info.name << "." << endl;
	cout << "Age: " << info.age << " Years." << endl;
	cout << "City: " << info.city << "." << endl;
	cout << "Country: " << info.country << "." << endl;
	cout << "Monthly Salary: " << info.monthly_salary << endl;
	cout << "Yearly Salary: " << info.monthly_salary * 12 << endl;
	cout << "Gender: " << info.my_gender << endl;
	cout << "Married: " << info.marital_s << endl;
	cout << "Favorate color: " << info.my_color << endl << endl;
	cout << "******************************\n\n";
}

int main()
{
	p_info person_1_info;
	read_info(person_1_info);
	print_info(person_1_info);

	return 0;

}