#include <iostream>
using namespace std;

struct stEmployee
{
	string Name;
	short age;
	float Salary;
};

int main()
{
	stEmployee Employee1, * ptr;

	Employee1.Name = "Mohammad Aburub";
	Employee1.Salary = 2000;
	Employee1.age = 33;

	cout << Employee1.Name << endl;
	cout << Employee1.Salary << endl;

	ptr = &Employee1;

	cout << "\nUsing Pointer: \n";
	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;
	cout << ptr->age << endl;
	
	return 0;
}