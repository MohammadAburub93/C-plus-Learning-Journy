#include <iostream>
#include <cstdlib>
using namespace std;

enum enDifficultyLevel { Easy = 1, Med = 2, Hard = 3, M = 4 };
enum enOperationType { Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5 };
enum enQuestionResult {Right = 1, Wrong = 2};

struct stQuestionInfo
{
	char OperationType = '+';
	short FirstValue = 0;
	short SecondValue = 0;
	short PlayerAnswer = 0;
	int QuestionAnswer = 0;
	enQuestionResult Result;
	string ResultName = "";
};

struct stQuizResults
{
	short TotalQuestionNum = 0;
	string QuestionsLevel;
	string OpType;
	short RightAnswersCount = 0;
	short WrongAnswersCount = 0;
	string FinalResult = "";
};

int ReadPlayerAnswer()
{
	int Answer = 0;
	
	cin >> Answer;

	return Answer;
}


short ReadHowManyQuestions()
{
	short QuestionsCount = 1;

	do
	{
		cout << "How many questions do you want to answer? ";
		cin >> QuestionsCount;
	} while (QuestionsCount < 1);

	return QuestionsCount;
}

enDifficultyLevel ReadQuestionLevel()
{
	short q_Level = 0;

	do
	{
		cout << "\nEnter questions level: [1]:Easy, [2]:Med, [3]:Hard, [4]:Mix ? ";
		cin >> q_Level;
	} while (q_Level < 1 || q_Level > 4);

	return (enDifficultyLevel)q_Level;
}

enOperationType ReadOperationType()
{
	short OpType = 0;

	do
	{
		cout << "\nEnter operation type: [1]:Add, [2]:Sub, [3]:Mul, [4]:Div, [5]:Mix ? ";
		cin >> OpType;
	} while (OpType < 1 || OpType > 5);

	return (enOperationType)OpType;
}

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;

	return RandomNumber;
}

short GetValue(enDifficultyLevel QuestionLevel)
{
	switch (QuestionLevel)
	{
		case enDifficultyLevel::Easy:
			return RandomNumber(1, 10);
			break;
		case enDifficultyLevel::Med:
			return RandomNumber(10, 30);
		case enDifficultyLevel::Hard:
			return RandomNumber(30, 70);
			break;
		case enDifficultyLevel::M:
			return RandomNumber(1, 70);
			break;
	}
}

char GetRandomOperationType()
{

	char OpType[4] = { '+', '-', '*', '/'};
	return OpType[RandomNumber(1,4) - 1];
}

 char GetOperationType(enOperationType OperationType)
{
	switch (OperationType)
	{
	case enOperationType::Add:
		return '+';
		break;
	case enOperationType::Sub:
		return '-';
		break;
	case enOperationType::Mul:
		return '*';
		break;
	case enOperationType::Div:
		return '/';
		break;
	case enOperationType::Mix:
		return GetRandomOperationType();
		break;
	}
}

int QuestionResult(stQuestionInfo QuestionInfo)
{
	switch (QuestionInfo.OperationType)
	{
		case '+':
			return QuestionInfo.FirstValue + QuestionInfo.SecondValue;
			break;
		case '-':
			return QuestionInfo.FirstValue - QuestionInfo.SecondValue;
			break;
		case '*':
			return QuestionInfo.FirstValue * QuestionInfo.SecondValue;
			break;
		case '/':
			return QuestionInfo.FirstValue / QuestionInfo.SecondValue;
			break;
	}
}

string ResultName(enQuestionResult Result)
{

	string ResultName[2] = {"Right", "Wrong" };
	return ResultName[Result - 1];
}

string LevelName(enDifficultyLevel QLevel)
{

	string LevelsName[4] = { "Easy", "Med", "Hard", "Mix"};
	return LevelsName[QLevel - 1];
}

string OperationName(enOperationType Op)
{
	string OperationName[5] = { "+", "-", "*", "/", "Mix"};
	return OperationName[Op - 1];
}

enQuestionResult Result(short PlayerAnswer, short QuestionAnswer)
{
	if (PlayerAnswer == QuestionAnswer)
		return enQuestionResult::Right;
	else
		return enQuestionResult::Wrong;
}

void SetAnswerStatusScreen(enQuestionResult Result)
{
	if (Result == enQuestionResult::Right)
	{
		system("color 2F");
	}
	else
	{
		cout << "\a";
		system("color 4F");
	}
	
}

void PrintQuestionStructure(stQuestionInfo QuestionInfo)
{
	cout << "\n\n" << QuestionInfo.FirstValue << endl;
	cout << QuestionInfo.SecondValue << " " << QuestionInfo.OperationType << "\n";
	cout << "_________________\n";
}

void PrintQuestionResult(stQuestionInfo QuestionInfo)
{
	if (QuestionInfo.Result == enQuestionResult::Right)
	{
		cout << "\nRight Answer :-)\n\n";
	}	
	else
	{
		cout << "\nWrong Answer :-(\n";
		cout << "The right answer is: " << QuestionInfo.QuestionAnswer;
		cout << "\n\n";
	}

	SetAnswerStatusScreen(QuestionInfo.Result);
}

stQuestionInfo PlayQuestion(short QuestionNumber, short TotalQuestions, enDifficultyLevel QuestionLevel, enOperationType OperationType)
{
	stQuestionInfo QuestionInfo;

	cout << "\nQuestion [" << QuestionNumber << "/" << TotalQuestions << "]: \n";

	QuestionInfo.FirstValue = GetValue(QuestionLevel);
	QuestionInfo.SecondValue = GetValue(QuestionLevel);
	QuestionInfo.OperationType = GetOperationType(OperationType);
	QuestionInfo.QuestionAnswer = QuestionResult(QuestionInfo);

	PrintQuestionStructure(QuestionInfo);

	QuestionInfo.PlayerAnswer = ReadPlayerAnswer();

	QuestionInfo.Result = Result(QuestionInfo.PlayerAnswer, QuestionInfo.QuestionAnswer);
	QuestionInfo.ResultName = ResultName(QuestionInfo.Result);

	return QuestionInfo;
}

stQuizResults FillQuizResults(short QuestionsCount, short RightAnswersCount, short WrongAnswersCount, enDifficultyLevel Level, enOperationType OP)
{
	stQuizResults QuizResults;

	QuizResults.TotalQuestionNum = QuestionsCount;
	QuizResults.QuestionsLevel = LevelName(Level);
	QuizResults.OpType = OperationName(OP);
	QuizResults.RightAnswersCount = RightAnswersCount;
	QuizResults.WrongAnswersCount = WrongAnswersCount;


	return QuizResults;
}

void PrintQuizResult(stQuizResults QuizResults)
{
	cout << "Number of Questions      : " << QuizResults.TotalQuestionNum << endl;
	cout << "Question Level           : " << QuizResults.QuestionsLevel << endl;
	cout << "Op Type                  : " << QuizResults.OpType << endl;
	cout << "Numbers of right answers : " << QuizResults.RightAnswersCount << endl;
	cout << "Numbers of Wrong answers : " << QuizResults.WrongAnswersCount << endl;
	cout << "___________________________________________________\n\n";

}

void FinalResultScreen(stQuizResults QuizResult)
{
	cout << "___________________________________________________\n\n";

	if (QuizResult.RightAnswersCount >= QuizResult.WrongAnswersCount)
		cout << "The Final Result is: Success :-)\n\n";
	else
		cout << "The Final Result is: Fail :-(\n\n";

	cout << "___________________________________________________\n\n";
}

void ResetScreen()
{
	system("color 0F");
	system("cls");
}

stQuizResults PlayQuiz(short HowManyQuestions, enDifficultyLevel QuestionLevel, enOperationType OperationType)
{
	stQuestionInfo QuestionInfo;
	short RightAnswersCount = 0, WrongAnswersCount = 0;

	for (int Question = 1; Question <= HowManyQuestions; Question++)
	{

		QuestionInfo = PlayQuestion(Question, HowManyQuestions, QuestionLevel, OperationType);

		if (QuestionInfo.Result == enQuestionResult::Right)
			RightAnswersCount++;
		else
			WrongAnswersCount++;

		PrintQuestionResult(QuestionInfo);
	}



	return FillQuizResults(HowManyQuestions, RightAnswersCount, WrongAnswersCount, QuestionLevel, OperationType);

}

void StartQuiz()
{
	char PlayAgain = 'y';
	short QuestionsCount = 0;
	enDifficultyLevel QuestionsLevel;
	enOperationType OperatorType;

	do
	{
		ResetScreen();

		QuestionsCount = ReadHowManyQuestions();
		QuestionsLevel = ReadQuestionLevel();
		OperatorType = ReadOperationType();

		stQuizResults QuizResult = PlayQuiz(QuestionsCount, QuestionsLevel, OperatorType);

		FinalResultScreen(QuizResult);

		PrintQuizResult(QuizResult);


		cout << endl << "Do you want to play again? Y/N? ";
		cin >> PlayAgain;

	} while (tolower(PlayAgain) == 'y');
}

int main()
{
	srand((unsigned)time(NULL));

	StartQuiz();

	return 0;
}