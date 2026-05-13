#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float s_length, hyp_length;
	double area;

	cout << "Please enter the value of the rectangle side length?" << endl;
	cin >> s_length;

	cout << "Please enter the value of the hypotenous length?" << endl;
	cin >> hyp_length;

	area = s_length * (sqrt(pow(hyp_length, 2) - pow(s_length, 2)));

	cout << "The area of the rectangle is: " << area << endl;

	return 0;
}