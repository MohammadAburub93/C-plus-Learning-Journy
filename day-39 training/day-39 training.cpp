#include <iostream>
using namespace std;

int main()
{
	int Mark = 65;
	string result = "";

	//Using short hand if
	result = (Mark >= 90) ? "A" : (Mark >= 80) ? "B" : (Mark >= 70) ? "C" : (Mark >= 60) ? "D" : "F";

	cout << result << endl;

	return 0;
}