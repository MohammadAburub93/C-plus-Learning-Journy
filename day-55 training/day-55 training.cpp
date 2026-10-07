#include <iostream>

using namespace std;

class  clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;

public:

	clsAddress()
	{
		cout << "Hi, I'm constructor." << endl;
	}

	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}

	string AddressLine1()
	{
		return _AddressLine1;
	}

	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}

	string AddressLine2()
	{
		return _AddressLine2;
	}

	void SetPOBox(string POBox)
	{
		_POBox = POBox;
	}

	string POBox()
	{
		return _POBox;
	}

	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}

	string AddressZipCodeLine1()
	{
		return _ZipCode;
	}

	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "------------------------";
		cout << "\nAddressLine1: " << _AddressLine1 << endl;
		cout << "AddressLine2: " << _AddressLine2 << endl;
		cout << "POBox       : " << _POBox << endl;
		cout << "ZipCode     : " << _ZipCode << endl;
	}

	~clsAddress()
	{
		cout << "Hi, I'm destructor." << endl;
	}
};

void Fun1()
{
	clsAddress Address1;
}

void Fun2()
{
	clsAddress* Address2 = new clsAddress;

	delete Address2;
}

int main()
{

	Fun1();

	Fun2();

	system("pause>0");

	return 0;
}