#include <iostream>
using namespace std;

int MyPowFun(int Base, int Power)
{

	if (Power == 0)
	{
		return 1;
	}
	else
	{
		return (Base * MyPowFun(Base, Power - 1));
	}

}

int main()
{
	cout << MyPowFun(2, 3) << endl;

	return 0;
}