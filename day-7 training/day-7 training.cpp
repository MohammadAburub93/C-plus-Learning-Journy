#include <iostream>

using namespace std;

struct st_owner
{
	string full_name;
	string phone;
};

struct car
{
	string brand;
	string model;
	short int year;
	st_owner owner;
};

int main()
{
	car my_car_1, my_car_2;

	my_car_1.brand = "BMW";
	my_car_1.model = "X5";
	my_car_1.year = 2000;
	my_car_1.owner.full_name = "Mohammad Aburub";
	my_car_1.owner.phone = "0123456789";

	my_car_2.brand = "Ford";
	my_car_2.model = "Mustang";
	my_car_2.year = 2022;
	my_car_2.owner.full_name = "Mohammad Aburub";
	my_car_2.owner.phone = "0123456789";

	cout << my_car_1.brand << " " << my_car_1.model << " " << my_car_1.year << " " << my_car_1.owner.full_name << endl;
	cout << my_car_2.brand << " " << my_car_2.model << " " << my_car_2.year << " " << my_car_2.owner.phone << endl;





	return 0;
}