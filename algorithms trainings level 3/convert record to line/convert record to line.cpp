#include <iostream>
#include <string>

using namespace std;

struct stClientData {

	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
};

stClientData FillClientData()
{
	stClientData ClientData;

	cout << "Please Enter Client Data:\n\n";

	cout << "Enter Account Number? ";
	getline(cin, ClientData.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, ClientData.PinCode);

	cout << "Enter Name? ";
	getline(cin, ClientData.Name);

	cout << "Enter Phone? ";
	getline(cin, ClientData.Phone);

	cout << "Enter Account Balance? ";
	cin >> ClientData.AccountBalance;

	return ClientData;
}

string ConvertRecordToLine(stClientData Client, string Seperator = "#//#")
{
	string ClientRecord = "";

	ClientRecord += Client.AccountNumber + Seperator; 
	ClientRecord += Client.PinCode + Seperator; 
	ClientRecord += Client.Name + Seperator; 
	ClientRecord += Client.Phone + Seperator; 
	ClientRecord += to_string(Client.AccountBalance); 

	return ClientRecord;
}

int main()
{
	stClientData Client = FillClientData();

	cout << "\n\nClient Record for Saving is:\n";
	cout << ConvertRecordToLine(Client) << endl;


	return 0;
}
