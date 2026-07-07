#include <iostream>
#include "MyLib.h"
#include "MyInputLib.h"

using namespace std;

int main()
{
	MyLib::Test();

	cout << MyLib::Sum2Numbers(1, 5) << endl;

	int Number = MyInputLib::ReadNumber();

	cout << Number;

	return 0;
}