#include <iostream>

using namespace std;

enum enColor {red, green, yellow, blue };
enum enGender { male, female};
enum enStatus {single, married};

struct st_address
{
	string streetname;
	string building_num;
	string POBox;
	string zipcode;
};

struct st_contact_info
{
	string phone;
	string email;
	st_address address;
};

struct st_person
{
	string first_name;
	string last_name;

	st_contact_info contact_info;

	enStatus marital_status;
	enGender gender;
	enColor fav_color;
};

int main()
{
	st_person person_1;

	person_1.first_name = "Mohammad";
	person_1.last_name = "Aburub";
	person_1.contact_info.email = "mmmmmmmm@gmail.com";
	person_1.contact_info.phone = "0123456789";
	person_1.contact_info.address.building_num = "5";
	person_1.contact_info.address.POBox = "00000";
	person_1.contact_info.address.streetname = "Mohammad";
	person_1.contact_info.address.zipcode =  "00000";

	person_1.gender = enGender::male;
	person_1.fav_color = enColor::blue;
	person_1.marital_status = enStatus::single;

	cout << person_1.first_name << " " << person_1.last_name << endl;
	cout << person_1.contact_info.phone << endl;

	return 0;
}