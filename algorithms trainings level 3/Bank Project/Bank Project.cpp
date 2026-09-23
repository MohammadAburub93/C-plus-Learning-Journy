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
	bool MarkForDelete = false;
};

string ReadAccountNumber()
{
	string AccountNumber = "";

	cout << "Please enter the account number? ";
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

void PrintClientRecord(stClientData ClientRecord)
{
	cout << "\nThe following are the client details:\n";
	cout << "Account Number : " << ClientRecord.AccountNumber << endl;
	cout << "Pin Code       : " << ClientRecord.PinCode << endl;
	cout << "Name           : " << ClientRecord.Name << endl;
	cout << "Phone          : " << ClientRecord.Phone << endl;
	cout << "Account Balance: " << ClientRecord.AccountBalance << endl;
}

bool ClientIsFound(vector <stClientData> AllClients, string AccountNumber, stClientData& TargetClient)
{
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

stClientData FindClient(vector <stClientData> AllClients, string AccountNumber)
{
	stClientData Client;

	system("cls");

	cout << "\n---------------------------------------\n";
	cout << "         Delete  Clients Screen          \n";
	cout << "---------------------------------------\n";

	AccountNumber = ReadAccountNumber();

	if (ClientIsFound(AllClients, AccountNumber, Client))
	{
		PrintClientRecord(Client);
	}
	else
	{
		cout << "\nClient with account number [" << AccountNumber << "] is not found!\n";

	}

	cout << "\nPress Any Key to go back to Main Menu...";

	system("pause>0");

	return Client;
}

stClientData FillClientData(vector <stClientData> AllClients)
{
	stClientData ClientData;

	cout << "Enter Account Number? ";
	getline(cin >> ws, ClientData.AccountNumber);

	while (ClientIsFound(AllClients, ClientData.AccountNumber, ClientData)) {

		cout << "Client with [" << ClientData.AccountNumber << "] is already existed, Enter another account number? ";
		getline(cin >> ws, ClientData.AccountNumber);

	}
	
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

void AddNewClient(vector <stClientData> AllClients)
{
	stClientData NewClient;
	NewClient = FillClientData(AllClients);

	AddClientToFile(ClientsFileName, ConvertRecordToLine(NewClient));
}

void AddClients(vector <stClientData>& AllClients)
{
	char AddMore = 'Y';

	do
	{
		system("cls");

		cout << "\n---------------------------------------\n";
		cout << "         Add New Clients Screen          \n";
		cout << "---------------------------------------\n";

		cout << "Adding New Client \n\n";
		AddNewClient(AllClients);

		cout << "\nClient Added Successfully, do you want to add more clients, Y/N? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');

	AllClients = ExtractAllClientsFromFile(ClientsFileName);

	cout << "\nPress Any Key to go back to Main Menu...";

	system("pause>0");

}

vector <stClientData> SaveClientsToFile(string FileName, vector <stClientData> AllClients)
{
	fstream ClientsFile;
	ClientsFile.open(FileName, ios::out);

	if (ClientsFile.is_open())
	{
		for (stClientData& Client : AllClients)
		{
			if (Client.MarkForDelete == false)
			{
				ClientsFile << ConvertRecordToLine(Client) << endl;
			}
		}

		ClientsFile.close();
	}

	return AllClients;
}

stClientData ChangeClientInfo(string AccountNumber)
{
	stClientData Client;

	Client.AccountNumber = AccountNumber;

	cout << "\n\nEnter PinCode? ";
	getline(cin >> ws, Client.PinCode);

	cout << "\nEnter Name? ";
	getline(cin, Client.Name);

	cout << "\nEnter Phone? ";
	getline(cin, Client.Phone);

	cout << "\nEnter Balance? ";
	cin >> Client.AccountBalance;

	return Client;
}

bool MarkClientForDeleteByAccountNumber(vector <stClientData>& AllClients, string AccountNumber)
{
	for (stClientData& Record : AllClients)
	{
		if (Record.AccountNumber == AccountNumber)
		{
			Record.MarkForDelete = true;
			return true;
		}

	}
	return false;
}

bool DeleteClientByAccountNumber(vector <stClientData>& AllClients, string AccountNumber)
{
	stClientData Client;
	char DeleteClient = 'N';

	system("cls");

	cout << "\n---------------------------------------\n";
	cout << "         Delete  Clients Screen          \n";
	cout << "---------------------------------------\n";

	AccountNumber = ReadAccountNumber();

	if (ClientIsFound(AllClients, AccountNumber, Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to delete this client? Y/N? ";
		cin >> DeleteClient;

		if (toupper(DeleteClient) == 'Y')
		{
			MarkClientForDeleteByAccountNumber(AllClients, AccountNumber);
			SaveClientsToFile(ClientsFileName, AllClients);

			AllClients = ExtractAllClientsFromFile(ClientsFileName);

			cout << "Client Deleted Successfully.\n";

			cout << "\nPress Any Key to go back to Main Menu...";

			system("pause>0");

			return true;
		}
	}
	else
	{
		cout << "\nClient with account number (" << AccountNumber << ") Not Found!\n";
	}

	cout << "\nPress Any Key to go back to Main Menu...";

	system("pause>0");

	return false;

}


bool UpdateClientByAccountNumber(vector <stClientData>& AllClients, string AccountNumber)
{
	stClientData Client;
	char UpdateClientInfo = 'N';

	system("cls");

	cout << "\n---------------------------------------\n";
	cout << "         Delete  Clients Screen          \n";
	cout << "---------------------------------------\n";

	AccountNumber = ReadAccountNumber();

	if (ClientIsFound(AllClients, AccountNumber, Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to update this client? Y/N? ";
		cin >> UpdateClientInfo;

		if (toupper(UpdateClientInfo) == 'Y')
		{
			for (stClientData& C : AllClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientInfo(AccountNumber);
					break;
				}
			}
			SaveClientsToFile(ClientsFileName, AllClients);

			AllClients = ExtractAllClientsFromFile(ClientsFileName);

			cout << "Client Updated Successfully.\n";

			cout << "\nPress Any Key to go back to Main Menu...";

			system("pause>0");

			return true;
		}
	}
	else
	{
		cout << "\nClient with account number (" << AccountNumber << ") Not Found!\n";
	}

	return false;

}

void PrintClientRecordInTable(stClientData ClientData)
{
	cout << "| " << setw(15) << left << ClientData.AccountNumber;
	cout << "| " << setw(10) << left << ClientData.PinCode;
	cout << "| " << setw(40) << left << ClientData.Name;
	cout << "| " << setw(12) << left << ClientData.Phone;
	cout << "| " << setw(12) << left << ClientData.AccountBalance;

}

void PrintAllClients(vector <stClientData> AllClients)
{
	system("cls");

	cout << "\n                                           Client List (" << AllClients.size() << ") Clients                        " << "\n";
	cout << "_______________________________________________________________________________________________________________" << "\n\n";
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________________________________________________________________\n" << "\n";

	for (stClientData Client : AllClients)
	{
		PrintClientRecordInTable(Client);
		cout << endl;
	}


	cout << "_______________________________________________________________________________________________________________\n\n";

	cout << "Press Any Key to go back to Main Menu...";

	system("pause>0");

}

void PrintMainMenu()
{
	system("cls");

	cout << "=================================================\n";
	cout << "                    Main Menu                    \n";
	cout << "=================================================\n";
	cout << "              [1] Show Clients List.             \n";
	cout << "              [2] Add New Client.                \n";
	cout << "              [3] Delete Client.                 \n";
	cout << "              [4] Update Client info.            \n";
	cout << "              [5] FInd Client.                   \n";
	cout << "              [6] Exit                           \n";
	cout << "=================================================\n";
}

int main()
{
	short UserChoice = 0;
	string AccountNumber = "";

	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);

	do
	{
		PrintMainMenu();

		cout << "\nChoose what do you want to do? [1-6]? ";
		cin >> UserChoice;

		if (UserChoice == 1)
			PrintAllClients(vClients);
		else if (UserChoice == 2)
			AddClients(vClients);
		else if (UserChoice == 3)
			DeleteClientByAccountNumber(vClients, AccountNumber);
		else if (UserChoice == 4)
			UpdateClientByAccountNumber(vClients, AccountNumber);
		else if (UserChoice == 5)
			FindClient(vClients, AccountNumber);

	} while (UserChoice != 6);

	system("pause>0");

	return 0;
}

