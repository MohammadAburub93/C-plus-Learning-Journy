#include <iostream>
#include<cmath>

using namespace std;

int main()
{

	short int num, m, result;

	cout << "Please enter the number value?" << endl;
	cin >> num;

	cout << "Please enter the power value?" << endl;
	cin >> m;

	result = pow(num, m);

	cout << "The result for " << num << " to the power " << m << " is: " << floor(result) << endl;




	return 0;
}