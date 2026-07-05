#include <iostream>
#include <cstdlib>
using namespace std;

enum enGameChoice {Rock = 1, Paper = 2, Scissor = 3};
enum enWinner {Player = 1, Computer = 2, Draw = 3};

struct stRoundInfo 
{
	short RoundNumber = 0;
	enGameChoice PlayerChoice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName = "";
};

struct stGameResult
{
	short GameRounds = 0;
	short PlayerWinsCount = 0;
	short ComputerWinsCount = 0;
	short DarwCount = 0;
	enWinner GameWinner;
	string WinnerName = "";
};

string Tabs(short TabsCount)
{
	string Tabs = "";

	for (int i = 1; i <= TabsCount; i++)
		Tabs = Tabs + "\t";

	return Tabs;
}

short ReadHowManyRounds()
{
	short GameRounds = 1;

	do
	{
		cout << "How many rounds from 1 to 10? ";
		cin >> GameRounds;
	} while (GameRounds < 1 || GameRounds > 10);

	return GameRounds;
}

enGameChoice ReadPlayerChoice()
{
	short PlayerChoice = 0;

	do
	{
		cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
		cin >> PlayerChoice;
	} while (PlayerChoice < 1 || PlayerChoice > 3);

	return (enGameChoice)PlayerChoice;
}

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

enGameChoice GetComputerChoice()
{
	return (enGameChoice)RandomNumber(1, 3);
}

enWinner RoundWinner(stRoundInfo RoundInfo)
{
	if (RoundInfo.PlayerChoice == RoundInfo.ComputerChoice)
		return enWinner::Draw;

	switch (RoundInfo.PlayerChoice)
	{
		case enGameChoice::Rock:
			if (RoundInfo.ComputerChoice == enGameChoice::Paper)
				return enWinner::Computer;
			break;
		case enGameChoice::Paper:
			if (RoundInfo.ComputerChoice == enGameChoice::Scissor)
				return enWinner::Computer;
			break;
		case enGameChoice::Scissor:
			if (RoundInfo.ComputerChoice == enGameChoice::Rock)
				return enWinner::Computer;
			break;
	}

	return enWinner::Player;
}

string ChoiceName(short PlayerChoice)
{

	string ChoiceName[3] = { "Rock", "Paper", "Scissor" };
	return ChoiceName[PlayerChoice - 1];
}

string WinnerName(enWinner Winner)
{

	string WinnersNames[3] = { "Player", "Computer", "Draw" };
	return WinnersNames[Winner - 1];
}

void SetWinnerScreen(enWinner Winner)
{
	if (Winner == enWinner::Player)
	{
		system("color 2F");
	}
	else if (Winner == enWinner::Computer)
	{
		cout << "\a";
		system("color 4F");
	}
	else
	{
		system("color 6F");
	}
}

void PrintRoundResult(stRoundInfo RoundInfo)
{
	cout << "\n\n__________________Round [" << RoundInfo.RoundNumber << "] __________________\n\n";
	cout << "Player Choice  : " << ChoiceName(RoundInfo.PlayerChoice) << endl;
	cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
	cout << "Round Winner   :  " << RoundInfo.WinnerName;
	cout << "\n\n______________________________________________\n\n";

	SetWinnerScreen(RoundInfo.Winner);
}

stRoundInfo RoundPlay(short RoundNumber)
{
	stRoundInfo RoundInfo;

	cout << "\nRound [" << RoundNumber << "] begins: \n\n";

	RoundInfo.RoundNumber = RoundNumber;
	RoundInfo.PlayerChoice = ReadPlayerChoice();
	RoundInfo.ComputerChoice = GetComputerChoice();
	RoundInfo.Winner = RoundWinner(RoundInfo);
	RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

	return RoundInfo;
}

enWinner WhoWinTheGame(stGameResult GameResult)
{
	if (GameResult.PlayerWinsCount > GameResult.ComputerWinsCount)
		return enWinner::Player;
	else if (GameResult.PlayerWinsCount > GameResult.ComputerWinsCount)
		return enWinner::Computer;
	else
		return enWinner::Draw;
}

stGameResult FillGameResults(short GameRounds, short PlayerWinsCount, short ComputerWinsCount, short DrawCount)
{
	stGameResult GameResults;

	GameResults.GameRounds = GameRounds;
	GameResults.PlayerWinsCount = PlayerWinsCount;
	GameResults.ComputerWinsCount = ComputerWinsCount;
	GameResults.DarwCount = DrawCount;
	GameResults.GameWinner = WhoWinTheGame(GameResults);
	GameResults.WinnerName = WinnerName(GameResults.GameWinner);

	return GameResults;
}

void PrintGameResult(stGameResult GameResults)
{
	
	cout << Tabs(2) << "__________________ [ Game Results ] _______________\n\n";
	cout << Tabs(2) << "Game Rounds          : " << GameResults.GameRounds << endl;
	cout << Tabs(2) << "Player Won Times     : " << GameResults.PlayerWinsCount << endl;
	cout << Tabs(2) << "Computer Won Times   : " << GameResults.ComputerWinsCount << endl;
	cout << Tabs(2) << "Draw Times           : " << GameResults.DarwCount << endl;
	cout << Tabs(2) << "Final Winner         : " << GameResults.WinnerName << endl;
	cout << Tabs(2) << "___________________________________________________\n\n";

}

void GameOverScreen()
{
	cout << Tabs(2) << "___________________________________________________\n\n";
	cout << Tabs(2) << "                   +++ Game Over +++                   \n\n";
	cout << Tabs(2) << "___________________________________________________\n\n";
}

void ResetScreen()
{
	system("color 0F");
	system("cls");
}

stGameResult PlayGame(short HowManyRounds)
{
	stRoundInfo RoundInfo;
	short PlayerWinsCount = 0, ComputerWinsCount = 0, DrawCounts = 0;

	for (int GameRound = 1; GameRound <= HowManyRounds; GameRound++)
	{

		RoundInfo = RoundPlay(GameRound);

		if (RoundInfo.Winner == enWinner::Player)
			PlayerWinsCount++;
		else if (RoundInfo.Winner == enWinner::Computer)
			ComputerWinsCount++;
		else
			DrawCounts++;

		PrintRoundResult(RoundInfo);
	}

	

	return FillGameResults(HowManyRounds, PlayerWinsCount, ComputerWinsCount, DrawCounts);
		
}

void StartGame()
{
	char PlayAgain = 'y';

	do
	{
		ResetScreen();

		stGameResult GameResults = PlayGame(ReadHowManyRounds());

		GameOverScreen();

		PrintGameResult(GameResults);


		cout << endl << Tabs(2) << "Do you want to play again? Y/N? ";
		cin >> PlayAgain;

	} while (tolower(PlayAgain) == 'y');
}

int main()
{
	srand((unsigned)time(NULL));

	StartGame();

	return 0;
}