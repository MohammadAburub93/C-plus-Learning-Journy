#include <iostream>

using namespace std;

class clsPerson
{
private:
	int Variable1 = 5;

	int Function1()
	{
		return 40;
	}

protected:
	int Variable2 = 100;

	int Function2()
	{
		return 80;
	}

public:
	string FirstName;
	string LastName;

	string FullName()
	{
		return FirstName + " " + LastName;
	}
};

int main()
{
	clsPerson Person1;

	Person1.FirstName = "Mohammad";
	Person1.LastName = "Aburub";

	cout << Person1.FullName() << endl;

}