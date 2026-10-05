#include <iostream>

using namespace std;

class clsPerson
{
private:

	string _FirstName;

public:

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	__declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;


};

int main()
{
	clsPerson Persson1;

	Persson1.SetFirstName("Mohammad");
	cout << Persson1.GetFirstName() << endl;

	Persson1.FirstName = "Mohammad";
	cout << Persson1.FirstName;

	system("pause>0");

	return 0;

	
}