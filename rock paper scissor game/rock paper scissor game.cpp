#include <iostream>
#include <cstdlib>
using namespace std;

enum enRockPaperScissor {Rock = 1, Paper = 2, Scissor = 3};

int ReadNumberInRange(string message, int From, int To)
{
	int Number;

	do
	{
		cout << message;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

string RoundWinner(short PlayerChoice, short ComputerChoice)
{
	if (PlayerChoice == ComputerChoice)
		return "No Winner";
	else if ((PlayerChoice == enRockPaperScissor::Rock && ComputerChoice == enRockPaperScissor::Scissor) ||
		(PlayerChoice == enRockPaperScissor::Paper && ComputerChoice == enRockPaperScissor::Rock) ||
		(PlayerChoice == enRockPaperScissor::Scissor && ComputerChoice == enRockPaperScissor::Paper))
		return "Player";
	else
		return "Computer";
}

string ChoiceWord(short PlayerChoice)
{

	string ChoiceName[3] = { "Rock", "Paper", "Scissor" };
	return ChoiceName[PlayerChoice - 1];
}

void PrintRoundResult(short RoundNumber, short PlayerChoice, short ComputerChoice, string Winner)
{
	cout << "\n\n__________________Round [" << RoundNumber << "] __________________\n\n";
	cout << "Player Choice  : " << ChoiceWord(PlayerChoice) << endl;
	cout << "Computer Choice: " << ChoiceWord(ComputerChoice) << endl;
	cout << "Round Winner   :  " << Winner;
	cout << "\n\n_____________________________________________________\n\n";

	if (Winner == "Player")
	{
		system("color 2F");
	}
	else if (Winner == "Computer")
	{
		cout << "\a";
		system("color 4F");
	}
	else
	{
		system("color 6F");
	}
	
}

string RoundPlay(short RoundNumber)
{
	short PlayerChoice = 0, ComputerChoice = 0;
	string Winner;

	cout << "\nRound [" << RoundNumber << "] begins: \n\n";

	PlayerChoice = ReadNumberInRange("Your choice : [1] Rock, [2] Paper, [3] Scissor ? ", 1, 3);

	ComputerChoice = RandomNumber(1, 3);

	Winner = RoundWinner(PlayerChoice, ComputerChoice);
	
	PrintRoundResult(RoundNumber, PlayerChoice, ComputerChoice, Winner);

	return Winner;

}

void PrintGameResult(short RoundsNumber, short PlayerWinsCount, short ComputerWinsCount, short DrawCounts, string FinalWinner)
{
	cout << "\t\t___________________________________________________\n\n";
	cout << "\t\t                   +++ Game Over +++                   \n\n";
	cout << "\t\t___________________________________________________\n\n";
	cout << "\t\t___________________ [ Game Results ] ________________\n\n";
	cout << "\t\tGame Rounds          : " << RoundsNumber << endl;
	cout << "\t\tPlayer Won Times     : " << PlayerWinsCount << endl;
	cout << "\t\tComputer Won Times   : " << ComputerWinsCount << endl;
	cout << "\t\tDraw Times           : " << DrawCounts << endl;
	cout << "\t\tFinal Winner         : " << FinalWinner << endl;
	cout << "\n\t\t___________________________________________________\n\n";

}

void GamePlay()
{
	short PlayerWinsCount = 0, ComputerWinsCount = 0, DrawCounts = 0;
	short RoundsNumber = ReadNumberInRange("How many round 1 to 10 ? ", 1, 10);
	string Winner, FinalWinner;

	for (int i = 1; i <= RoundsNumber; i++)
	{
		Winner = RoundPlay(i);

		if (Winner == "Player")
			PlayerWinsCount++;
		else if (Winner == "Computer")
			ComputerWinsCount++;
		else
			DrawCounts++;
	}

	if (PlayerWinsCount > ComputerWinsCount)
			FinalWinner =  "Player";
		else if (ComputerWinsCount > PlayerWinsCount)
			FinalWinner =  "Computer";
		else
			FinalWinner =  "It's a Draw";

	PrintGameResult(RoundsNumber, PlayerWinsCount, ComputerWinsCount, DrawCounts, FinalWinner);
		
}

int main()
{
	srand((unsigned)time(NULL));

	char PlayAgain = 'y';

	do
	{
		system("color 0F");
		system("cls");

		GamePlay();

		cout << "\t\tDo you want to play again? Y/N? ";
		cin >> PlayAgain;

	} while (tolower(PlayAgain) == 'y');


	return 0;
}