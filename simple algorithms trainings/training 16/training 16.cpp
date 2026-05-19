#include <iostream>
#include <cmath>

using namespace std;

double rec_area(float s_length, float hyp_length)
{
	return s_length* (sqrt(pow(hyp_length, 2) - pow(s_length, 2)));
}

int main()
{
	float s_length, hyp_length;

	cout << "Please enter the value of the rectangle side length?" << endl;
	cin >> s_length;

	cout << "Please enter the value of the hypotenous length?" << endl;
	cin >> hyp_length;


	cout << "The area of the rectangle is: " << rec_area(s_length, hyp_length) << endl;

	return 0;
}