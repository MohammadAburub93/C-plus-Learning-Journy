#include <iostream>
#include <cmath>

using namespace std;

void read_rec_values(float &s_length, float &hyp_length)
{
	cout << "Please enter the value of the rectangle side length?" << endl;
	cin >> s_length;

	cout << "Please enter the value of the hypotenous length?" << endl;
	cin >> hyp_length;
}

double rec_area(float s_length, float hyp_length)
{
	return s_length* (sqrt(pow(hyp_length, 2) - pow(s_length, 2)));
}

void print_rec_area(double area)
{
	cout << "The area of the rectangle is: " << area << endl;
}

int main()
{
	float s_length, hyp_length;
	
	read_rec_values(s_length, hyp_length);
	print_rec_area(rec_area(s_length, hyp_length));
	
	return 0;
}