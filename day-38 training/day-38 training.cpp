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

	int NUmberBetween1And10 = MyInputLib::ReadNumberInRange(1, 10);
	cout << NUmberBetween1And10;

	return 0;
}