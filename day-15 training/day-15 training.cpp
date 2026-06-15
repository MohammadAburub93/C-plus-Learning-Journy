#include <iostream>

using namespace std;


int main()
{
	int grades[3];
	float average;

	cout << "Please enter the first grade?\n";
	cin >> grades[0];

	cout << "Please enter the second grade?\n";
	cin >> grades[1];

	cout << "Please enter the third grade?\n";
	cin >> grades[2];

	average = (grades[0] + grades[1] + grades[2]) / 3;

	cout << "\n****************************\n";
	cout << "The average of grades is: " << average << endl;


	return 0;

}