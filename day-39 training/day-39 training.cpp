#include <iostream>
using namespace std;

int main()
{
	int Mark = 90;
	string result = "";

	if (Mark >= 50)
	{
		result = "Pass";
	}
	else
	{
		result = "Fail";
	}

	cout << result << endl;

	Mark = 40;

	//Using short hand if
	result = (Mark >= 50) ? "Pass" : "Fail";

	cout << result << endl;

	return 0;
}