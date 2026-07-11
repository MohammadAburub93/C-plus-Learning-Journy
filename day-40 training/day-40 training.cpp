#include <iostream>
using namespace std;

//optinal Parameters
int MyMulFun(int a, int b, int c = 1)
{
	return (a * b * c);
}

int main()
{
	cout << MyMulFun(5, 5) << endl;
	cout << MyMulFun(5, 5, 5) << endl;
 
	return 0;
}

