#include <iostream>

using namespace std;

class clsPerson
{
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