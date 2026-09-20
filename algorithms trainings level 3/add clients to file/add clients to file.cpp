#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string ClientsFileName = "ClientsFile.txt";

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

	cout << "Enter Account Number? ";
	getline(cin >> ws, ClientData.AccountNumber);

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

void AddClientToFile(string FileName, string DataLine)
{
	fstream ClientsFile;
	ClientsFile.open(FileName, ios::out | ios::app);

	if (ClientsFile.is_open())
	{
		ClientsFile << DataLine << endl;;
		ClientsFile.close();
	}
}

void AddNewClient()
{
	stClientData NewClient;
	NewClient = FillClientData();

	AddClientToFile(ClientsFileName, ConvertRecordToLine(NewClient));
}

void AddClients()
{
	char AddMore = 'Y';

	do
	{
		system("cls");


		cout << "Adding New Client \n\n";
		AddNewClient();
		
		cout << "Client Added Successfully, do you want to add more clients, Y/N? \n";
		cin >> AddMore;
		
	} while (toupper(AddMore) == 'Y');

}

int main()
{
	AddClients();

	system("pause>0");

	return 0;
}
