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

void ShowMainMenu();
bool FindClientByAccountNumber(string AccountNumber, vector <stClientData> vClients, stClientData& Client);
void ShowTransactionsMenu();

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

bool ClientIsFoundByAccountNumber(string AccountNumber, string FileName)
{
	vector <stClientData> vClients;
	fstream ClientsFile;
	ClientsFile.open(FileName, ios::in);

	if (ClientsFile.is_open())
	{
		string Line;
		stClientData Client;

		while (getline(ClientsFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			if (Client.AccountNumber == AccountNumber)
			{
				ClientsFile.close();
				return true;
			}

			vClients.push_back(Client);
		}

		ClientsFile.close();
	}
	return false;
}

void FindClient()
{

	cout << "\n---------------------------------------\n";
	cout << "         Delete  Clients Screen          \n";
	cout << "---------------------------------------\n";

	stClientData Client;
	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);
	string AccountNumber = ReadAccountNumber();

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientRecord(Client);
	}
	else
	{
		cout << "\nClient with account number [" << AccountNumber << "] is not found!\n";
	}
}

stClientData FillClientData()
{
	stClientData ClientData;

	cout << "Enter Account Number? ";
	getline(cin >> ws, ClientData.AccountNumber);

	while (ClientIsFoundByAccountNumber(ClientData.AccountNumber, ClientsFileName)) {

		cout << "\nClient with [" << ClientData.AccountNumber << "] is already existed, Enter another account number? ";
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
		cout << "\n---------------------------------------\n";
		cout << "         Add New Clients Screen          \n";
		cout << "---------------------------------------\n";

		cout << "Adding New Client \n\n";
		AddNewClient();

		cout << "\nClient Added Successfully, do you want to add more clients, Y/N? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
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

bool FindClientByAccountNumber(string AccountNumber, vector<stClientData> vClients, stClientData& Client)
{
	for (stClientData C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

bool DeleteClientByAccountNumber()
{
	stClientData Client;
	char DeleteClient = 'N';

	cout << "\n---------------------------------------\n";
	cout << "         Delete  Clients Screen          \n";
	cout << "---------------------------------------\n";

	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);
	string AccountNumber = ReadAccountNumber();

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to delete this client? Y/N? ";
		cin >> DeleteClient;

		if (toupper(DeleteClient) == 'Y')
		{
			MarkClientForDeleteByAccountNumber(vClients, AccountNumber);
			SaveClientsToFile(ClientsFileName, vClients);

			vClients = ExtractAllClientsFromFile(ClientsFileName);
			return true;
		}
	}
	else
	{
		cout << "\nClient with account number (" << AccountNumber << ") Not Found!\n";
	}

	return false;

}


bool UpdateClientByAccountNumber()
{
	stClientData Client;
	char UpdateClientInfo = 'N';

	cout << "\n---------------------------------------\n";
	cout << "         Delete  Clients Screen          \n";
	cout << "---------------------------------------\n";

	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);
	string AccountNumber = ReadAccountNumber();

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nAre you sure you want to update this client? Y/N? ";
		cin >> UpdateClientInfo;

		if (toupper(UpdateClientInfo) == 'Y')
		{
			for (stClientData& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C = ChangeClientInfo(AccountNumber);
					break;
				}
			}
			SaveClientsToFile(ClientsFileName, vClients);

			vClients = ExtractAllClientsFromFile(ClientsFileName);

			return true;
		}
	}
	else
	{
		cout << "\nClient with account number (" << AccountNumber << ") Not Found!\n";
	}

	return false;

}

bool MakeDepositToByAccountNumber()
{
	stClientData Client;
	char PerformTransaction = 'N';
	double DepositAmount = 0;

	cout << "\n---------------------------------------\n";
	cout << "            Deposit Screen               \n";
	cout << "---------------------------------------\n";

	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);
	string AccountNumber = ReadAccountNumber();

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nPlease Enter deposit amount? ";
		cin >> DepositAmount;

		cout << "\n\nAre you sure you want to perform this transaction? Y/N? ";
		cin >> PerformTransaction;

		if (toupper(PerformTransaction) == 'Y')
		{
			for (stClientData& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C.AccountBalance += DepositAmount;

					cout << "\n\nDeposit Process Successfully Done, New Balance is: " << C.AccountBalance << endl;

					break;
				}
			}
			SaveClientsToFile(ClientsFileName, vClients);

			vClients = ExtractAllClientsFromFile(ClientsFileName);

			return true;
		}
	}
	else
	{
		cout << "\nClient with account number (" << AccountNumber << ") Not Found!\n";
	}

	return false;

}

bool MakeWithDrawToByAccountNumber()
{
	stClientData Client;
	char PerformTransaction = 'N';
	double WithDrawAmount = 0;

	cout << "\n---------------------------------------\n";
	cout << "            WithDraw Screen               \n";
	cout << "---------------------------------------\n";

	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);
	string AccountNumber = ReadAccountNumber();

	if (FindClientByAccountNumber(AccountNumber, vClients, Client))
	{
		PrintClientRecord(Client);

		cout << "\n\nPlease Enter WithDraw amount? ";
		cin >> WithDrawAmount;

		cout << "\n\nAre you sure you want to perform this transaction? Y/N? ";
		cin >> PerformTransaction;

		if (toupper(PerformTransaction) == 'Y')
		{
			for (stClientData& C : vClients)
			{
				if (C.AccountNumber == AccountNumber)
				{
					C.AccountBalance -= WithDrawAmount;

					cout << "\n\nWithDraw Process Successfully Done, New Balance is: " << C.AccountBalance << endl;

					break;
				}
			}
			SaveClientsToFile(ClientsFileName, vClients);

			vClients = ExtractAllClientsFromFile(ClientsFileName);

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

void PrintBalanceInTable(stClientData ClientData)
{
	cout << "| " << setw(25) << left << ClientData.AccountNumber;
	cout << "| " << setw(40) << left << ClientData.Name;
	cout << "| " << setw(12) << left << ClientData.AccountBalance;

}

void ShowEndScreen()
{
	cout << "\n---------------------------------------\n";
	cout << "               Program End               \n";
	cout << "---------------------------------------\n";
}

void PrintAllClients()
{
	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);

	cout << "\n                                           Client List (" << vClients.size() << ") Clients                        " << "\n";
	cout << "_______________________________________________________________________________________________________________" << "\n\n";
	cout << "| " << left << setw(15) << "Account Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________________________________________________________________\n" << "\n";

	if (vClients.size() == 0)
	{
		cout << "\t\t\tNo Clients Avaliable in the system.";
	}
	else
	{
		for (stClientData Client : vClients)
		{
			PrintClientRecordInTable(Client);
			cout << endl;
		}
	}
	
	cout << "_______________________________________________________________________________________________________________\n\n";

}

void ShowTotalBalanceScreen()
{
	double TotalBalance = 0;
	vector <stClientData> vClients = ExtractAllClientsFromFile(ClientsFileName);

	cout << "\n                                           Balances List (" << vClients.size() << ") Clients                        " << "\n";
	cout << "_______________________________________________________________________________________________________________" << "\n\n";
	cout << "| " << left << setw(25) << "Account Number";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________________________________________________________________\n" << "\n";

	if (vClients.size() == 0)
	{
		cout << "\t\t\tNo Clients Avaliable in the system.";
	}
	else
	{
		for (stClientData Client : vClients)
		{
			TotalBalance += Client.AccountBalance;
			PrintBalanceInTable(Client);
			cout << endl;
		}
	}

	cout << "_______________________________________________________________________________________________________________\n\n";

	cout << "\t\t\tTotal Balance = " << TotalBalance << "\n\n";

}

enum enMainMenuOptions {
	eListClients = 1, eAddNewClient = 2,
	eDeleteClient = 3, eUpdateClient = 4,
	eFindClient = 5, eTransactions = 6, eExit = 7
};

enum enTransactionsMenuOptions {
	eDeposit = 1, eWithDraw = 2,
	eTotalBalances = 3, eMainMenu = 4,
};

short ReadMainMenuOption()
{
	short UserChoice = 0;

	cout << "\nChoose what do you want to do? [1-7]? ";
	cin >> UserChoice;

	return UserChoice;
}

void GoBackToMainMenu()
{
	cout << "Press Any Key to go back to Main Menu...";

	system("pause>0");

	ShowMainMenu();
}

void GoBackToTransactionsMenu()
{
	cout << "Press Any Key to go back to Transactions Menu...";

	system("pause>0");

	ShowTransactionsMenu();
}

short ReadTransactionsMenuOption()
{
	short UserChoice = 0;

	cout << "\nChoose what do you want to do? [1-4]? ";
	cin >> UserChoice;

	return UserChoice;
}

void PerformTransactionsMenuOptions(enTransactionsMenuOptions TransactionsMenuOption)
{
	switch (TransactionsMenuOption)
	{
	case enTransactionsMenuOptions::eDeposit:
	{
		system("cls");
		MakeDepositToByAccountNumber();
		GoBackToTransactionsMenu();
		break;
	}

	case enTransactionsMenuOptions::eWithDraw:
	{
		system("cls");
		MakeWithDrawToByAccountNumber();
		GoBackToTransactionsMenu();
		break;
	}

	case enTransactionsMenuOptions::eTotalBalances:
	{
		system("cls");
		ShowTotalBalanceScreen();
		GoBackToTransactionsMenu();
		break;
	}

	case enTransactionsMenuOptions::eMainMenu:
	{
		ShowMainMenu();
		break;
	}
	}
}

void ShowTransactionsMenu()
{
	system("cls");

	cout << "=================================================\n";
	cout << "\t\tTransactions Menu                            \n";
	cout << "=================================================\n";
	cout << "\t[1] Deposit.                  \n";
	cout << "\t[2] WithDraw.                 \n";
	cout << "\t[3] Total Balances.           \n";
	cout << "\t[4] Main Menu.                \n";
	cout << "=================================================\n";
	PerformTransactionsMenuOptions((enTransactionsMenuOptions)ReadTransactionsMenuOption());
}

void PerformMainMenuOptions(enMainMenuOptions MainMenuOption)
{
	switch (MainMenuOption)
	{
		case enMainMenuOptions::eListClients:
		{
			system("cls");
			PrintAllClients();
			GoBackToMainMenu();
			break;
		}

		case enMainMenuOptions::eAddNewClient:
		{
			system("cls");
			AddClients();
			GoBackToMainMenu();
			break;
		}

		case enMainMenuOptions::eDeleteClient:
		{
			system("cls");
			DeleteClientByAccountNumber();
			GoBackToMainMenu();
			break;
		}

		case enMainMenuOptions::eUpdateClient:
		{
			system("cls");
			UpdateClientByAccountNumber();
			GoBackToMainMenu();
			break;
		}

		case enMainMenuOptions::eFindClient:
		{
			system("cls");
			FindClient();
			GoBackToMainMenu();
			break;
		}

		case enMainMenuOptions::eTransactions:
		{
			system("cls");
			ShowTransactionsMenu();
			break;
		}

		case enMainMenuOptions::eExit:
		{
			system("cls");
			ShowEndScreen();
			break;
		}
	}
}

void ShowMainMenu()
{
	system("cls");

	cout << "=================================================\n";
	cout << "\t\tMain Menu                    \n";
	cout << "=================================================\n";
	cout << "\t[1] Show Clients List.             \n";
	cout << "\t[2] Add New Client.                \n";
	cout << "\t[3] Delete Client.                 \n";
	cout << "\t[4] Update Client info.            \n";
	cout << "\t[5] Find Client.                   \n";
	cout << "\t[6] Transactions.                   \n";
	cout << "\t[7] Exit                           \n";
	cout << "=================================================\n";
	PerformMainMenuOptions((enMainMenuOptions) ReadMainMenuOption());
}

int main()
{	
	ShowMainMenu();

	system("pause>0");

	return 0;
}

