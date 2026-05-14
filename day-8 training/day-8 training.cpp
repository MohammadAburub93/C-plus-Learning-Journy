#include <iostream>

using namespace std;

enum color {red, green, yellow, blue };
enum direction { north, south, east, west };
enum week { Sat, Sun, Mon, Tue , Wed, Thu, Fri };
enum gender { male, female};
enum status {single, married};

int main()
{
	color my_color;
	direction my_direction;
	week today;
	status my_status;

	my_color = color::blue;
	my_direction = direction::west;
	today = week::Thu;
	my_status = status::single;

	cout << "Color is: " << my_color << endl;


	return 0;
}