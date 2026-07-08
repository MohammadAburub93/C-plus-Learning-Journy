#include <iostream>
using namespace std;

int main()
{
	int Number = 0;
	string result = "";
	
	result = (Number > 0) ? "Positive Number" : (Number < 0) ? "Negative Number" : "Zero";

	cout << result << endl;

	return 0;
}