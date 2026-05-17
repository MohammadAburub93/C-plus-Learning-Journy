#include <iostream>
#include <string>

using namespace std;

int main()
{
	float n3 = 55.23;

	string n3_string = to_string(n3);

	int n3_int1 = n3;
	int n3_int2 = (int)n3;
	int n3_int3 = int(n3);

	cout << n3_string << endl;
	cout << n3_int1 << endl;
	cout << n3_int2 << endl;
	cout << n3_int3 << endl;

	return 0;
}