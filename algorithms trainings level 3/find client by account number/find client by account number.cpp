#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const string ClientsFileName = "CLientsFile.txt";

struct stClientData {

	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
};

string ReadAccountNumber()
{
	string AccountNumber = "";

	cout << "Please enter the account number? " << endl;
	cin >> AccountNumber;

	return AccountNumber;
}

vector <string> SplitString(string Text, string Delim)
{
	vector <string> SplitResult;

	short pos = 0;
	string word;

	while ((pos = Text.find(Delim)) != std::string::npos)
	{
		word = Text.substr(0, pos);

		if (word != "")
			SplitResult.push_back(word);

		Text.erase(0, pos + Delim.length());
	}

	if (Text != "")
		SplitResult.push_back(Text);

	return SplitResult;
}

stClientData ConvertLineToRecord(string DataLine, string Seperator = "#//#")
{
	stClientData ClientRecord;

	vector <string> Data = SplitString(DataLine, Seperator);

	ClientRecord.AccountNumber = Data[0];
	ClientRecord.PinCode = Data[1];
	ClientRecord.Name = Data[2];
	ClientRecord.Phone = Data[3];
	ClientRecord.AccountBalance = stod(Data[4]);

	return ClientRecord;
}

vector <stClientData> ExtractAllClientsFromFile(string FileName)
{
	vector <stClientData> vClients;

	fstream ClientsFile;

	ClientsFile.open(FileName, ios::in);

	if (ClientsFile.is_open())
	{
		string Line;
		stClientData ClientData;

		while (getline(ClientsFile, Line))
		{
			ClientData = ConvertLineToRecord(Line);
			vClients.push_back(ClientData);
		}

		ClientsFile.close();
	}

	return vClients;
}

bool ClientIsFound(string AccountNumber, stClientData& TargetClient)
{
	vector <stClientData> AllClients = ExtractAllClientsFromFile(ClientsFileName);

	for (stClientData Client : AllClients)
	{
		if (Client.AccountNumber == AccountNumber)
		{
			TargetClient = Client;
			return true;
		}								
	}

	return false;
}

void PrintClientRecord(stClientData ClientRecord)
{
	cout << "\nThe following are the client details:\n";
	cout << "Account Number : " << ClientRecord.AccountNumber << endl;
	cout << "Pin Code       : " << ClientRecord.PinCode << endl;
	cout << "Name           : " << ClientRecord.Name << endl;
	cout << "Phone          : " << ClientRecord.Phone << endl;
	cout << "Account Balance: " << ClientRecord.AccountBalance << endl;
}



int main()
{
	stClientData Client;
	string AccountNumber = ReadAccountNumber();
	
	if (ClientIsFound(AccountNumber, Client))
	{
		PrintClientRecord(Client);
	}
	else
	{
		cout << "\nClient with account number (" << AccountNumber << ") Not Found!\n";
	}

	system("pause>0");

	return 0;
}
