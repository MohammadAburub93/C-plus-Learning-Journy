#include <iostream>
using namespace std;

int main()
{
	bool result;

	//NOT(5 > 6 OR 7=7) AND NOT(1 OR false)

	result = !(5 > 6 || 7 == 7) && !(1 || false);

	cout << result << endl;

	return 0;
}