/*********************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/24/17
** Description: Main file for a dice game
**
** To run this program, simply execute the RPSGame file after compiling
*********************************************************************/
#include <string>
#include "RPSGame.hpp"
#include "Menu.hpp"
#include "Scissors.hpp"
#include "Paper.hpp"
#include "Rock.hpp"

using std::endl;
using std::cout;
using std::cin;
using std::string;

RPSGame::RPSGame()
{
	// optional, see note in RPSMenu()
	RPSMenu();

	// human player
	player = new Player();

	// true sets this player to be a computer... 
	computer = new Player(true);
}

RPSGame::~RPSGame()
{
	// de-allocate memory
	delete player;
	delete computer;
}

void RPSGame::RPSMenu()
{
	cout << "================================================================================" << endl;
	cout << "                        ROCK PAPER SCISSORS                            " << endl;
	cout << "=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~" << endl;
	cout << "                  CS162 - Group Project - Team 15" << endl;
	cout << endl;

	bool valid_menu_choice = false;
	int userChoice;

	// NOTE to classmates: This menu stuff is optional....I sort of just added it in blindly, we 
	// may want to remove later to more closely follow the 'Example' from the requirements, i.e no menu

	Menu menu = Menu();
	menu.Add("Play Game");
	menu.Add("Exit Game");
	menu.printAll();
	cout << endl;
	
	cout << "Enter your Selection: ";

	while (!valid_menu_choice)
	{
		validateIntegerInput(userChoice);
		cout << endl;
		if (userChoice > menu.Count() || userChoice < 1)
			cout << "Not a valid selection, please try again: ";
		else
			valid_menu_choice = true;
	}

	if (userChoice == 1) {
		startGame();
	}
	else if (userChoice == 2) {
		exitGame();
	}
}


void RPSGame::startGame()
{
	// variables for user input
	char toolChoice;
	string yes_or_no;

	// variables for initializing game, based on user input
	bool choose_tool_strength = false;

	//TODO: implement tool selection for AI?
//	int computerToolChoice;

	// start RPS prompts
	cout << endl;
	cout << "Welcome to Rock, Paper, Scissors! Do you want to choose different strengths for the tools? (Y/N): ";
	choose_tool_strength = validateYesNo(yes_or_no);
	cout << endl;

	//Sets tool strength for the user and computer
	if (choose_tool_strength)
	{

		cout << "Please choose a tool strength for player rock: ";
		cin >> playerRockStr;

		cout << "Please choose a tool strength for player paper: ";
		cin >> playerPaperStr;

		cout << "Please choose a tool strength for player scissor: ";
		cin >> playerScissorsStr;

		cout << "Now you need to set the strength for the computer's tools \n";

		cout << "Please choose a tool strength for AI rock: ";
		cin >> computerRockStr;

		cout << "Please choose a tool strength for AI paper: ";
		cin >> computerPaperStr;

		cout << "Please choose a tool strength for AI scissors: ";
		cin >> computerScissorsStr;

	}
	cout << "Choose your tool (r - rock, p - paper, s-scissor, e - exit): ";
	int tool = validateToolChoice(toolChoice);

	if (tool == 1) {
		// rock
		cout << "You have chosen rock." << endl;  //TESTING.  DELETE BEFORE SUBMISSION
		if (playerRockStr != NULL) {
			Rock playerRock(playerRockStr);
			playerTool = &playerRock;

		}
		else
		{
			Rock playerRock;
			playerTool = &playerRock;


		}

	}

	else if (tool == 2) {
		// paper
		cout << "You have chosen paper." << endl;  //TESTING.  DELETE BEFORE SUBMISSION
		if (playerPaperStr != NULL) {
			Paper playerPaper(playerPaperStr);
			playerTool = &playerPaper;
		}
		else

		{
			Paper playerPaper;
			playerTool = &playerPaper;
		}
	}

	else if (tool == 3) {
		// scissors
		cout << "You have chosen scissors." << endl;  //TESTING.  DELETE BEFORE SUBMISSION
		if (playerScissorsStr != NULL) {
			Scissors playerScissors(playerScissorsStr);
			playerTool = &playerScissors;
		}
		else

		{
			Scissors playerScissors;
			playerTool = &playerScissors;
		}
	}

		else if (tool == 4) {
			// exit game
			return;
		}
	
	//Random AI for testing
	//Needs to be improved
	switch (rand() % 3 + 1)
	{
	case 1:
		cout << "The computer has chosen rock." << endl;
		if (computerRockStr != NULL)
		{
				Rock computerRock(computerRockStr);

				computerTool = &computerRock;

			}
			else

			{
				Rock computerRock;
				computerTool = &computerRock;

			}
		break;

	case 2:
		cout << "The computer has chosen paper." << endl;
		if (computerPaperStr != NULL)
		{
			Paper computerPaper(computerPaperStr);
			computerTool = &computerPaper;

		}
		else

		{
			Paper computerPaper;
			computerTool = &computerPaper;

		}
		break;

	case 3:
		cout << "The computer has chosen scissors." << endl;
		if (computerScissorsStr != NULL)
		{
			Scissors computerScissors(computerScissorsStr);
			computerTool = &computerScissors;

		}
		else

		{
			Scissors computerScissors;
			computerTool = &computerScissors;
		}
		break;

	default:
		cout << "An error occured in the AI tool selection switch statement \n";
	}
	gameLoop(); //Starts game loop
}

void RPSGame::gameLoop()
{	

	char playerToolType = playerTool->GetType();
	char compToolType = computerTool->GetType();
	int playerToolStr = playerTool->GetStrength();
	int compToolStr = computerTool->GetStrength();

	//This mess can likely be improved and broken out into its own function
	if (playerToolType == 'r')
	{
		switch (compToolType) 
		{

		case 'r':
			//No change due to same tool type
			break;


		case 'p':
			playerToolStr /= 2;
			compToolStr *= 2;
			break;

		case 's':
			playerToolStr *= 2;
			compToolStr /= 2;
			break;

		default:
			cout << "An error occured in the set player tool strength of the gameloop" << endl;

		}
	}
	
	else if (playerToolType == 'p')
	{
		switch (compToolType) 
		{

		case 'r':
			playerToolStr /= 2;
			compToolStr *= 2;
			break;

		case 'p':
			//No change due to same tool type
			break;

		case 's':
			playerToolStr *= 2;
			compToolStr /= 2;
			break;

		default:
			cout << "An error occured in the set player tool strength of the gameloop" << endl;

		}

	}

			else if (playerToolType == 's')
			{
				switch (compToolType) 
				{

				case 'r':
					playerToolStr /= 2;
					compToolStr *= 2;
					break;


				case 'p':
					playerToolStr *= 2;
					compToolStr /= 2;
					break;

				case 's':
					//No change due to same tool type
					break;

				default:
					cout << "An error occured scissors portion of set tool strength portion of the gameloop" << endl;
				}
			}
	toolFight(playerToolStr, compToolStr); //Compares strengths

};

//Compares adjusted strengths of tools
void RPSGame::toolFight(int incPlToolStr,int incCoToolStr)
{
	if (incPlToolStr > incCoToolStr)
	{
		cout << "You win!" << endl;
		humanWins++;
	}
	else
	{
		cout << "The computer wins!  :-( " << endl;
		computerWins++;
	}
	cout << "Times you've won: " << humanWins << endl;
	cout << "Times the computer has won: " << computerWins << endl;
	playAgain(); //Asks if use would like to play again
};



void RPSGame::validateIntegerInput(int& input)
{
	cin >> input;
	while (cin.fail() || input < 1) {
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(80, '\n');
			cout << endl;
			cout << "Input must be an integer: ";
		}
		else if (input < 1) {
			cout << endl;
			cout << "Please enter a positive integer: ";
		}
		cin.clear();
		cin >> input;
	}
}

bool RPSGame::validateYesNo(string& input)
{
	cin >> input;
	while (cin.fail() || input != "Y" || input != "y" || input != "N" || input != "n")
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(80, '\n');
			cout << "Please only enter 'Y' or 'N' : ";
		}
		else if (input == "Y" || input == "y")
		{
			return true;
		}
		else if (input == "N" || input == "n")
		{
			return false;
		}
		else {
			cin.clear();
			cin.ignore(80, '\n');
			cout << "Please only enter 'Y' or 'N' : ";
			cin >> input;
		}
	}
	// dummy return to avoid warnings
	return false;
}



int RPSGame::validateToolChoice(char& input)
{
	cin >> input;
	while (cin.fail() || input != 'R' || input != 'r' || input != 'S' || input != 's' || input != 'P' || input != 'p' || input != 'E' || input != 'e')
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(80, '\n');
			cout << "Please only enter a valid character (r = rock, s = scissors, p = paper, e = exit game): ";
		}
		else if (input == 'R' || input == 'r') {
			// user picked Rock
			return 1;
		}
		else if (input == 'S' || input == 's') {
			// user picked Scissors
			return 2;
		}
		else if (input == 'P' || input == 'p') {
			// user picked Paper
			return 3;
		}
		else if (input == 'E' || input == 'e') {
			// user exits
			return 4;
		}
		else {
			cin.clear();
			cin.ignore(80, '\n');
			cout << "Please only enter a valid character (r = rock, s = scissors, p = paper, e = exit game): ";
		}
		cin.clear();
		cin >> input;
	}

	// dummy return, will never reach this
	return 0;
}

void RPSGame::playAgain()
{
	char userChoice;
	cout << "Would you like to play again? ";
	cin.clear();
	cin.ignore(80, '\n');
	cin >> userChoice;
	switch (userChoice)
	{
	case ('y') : 
		startGame();
		break;

	case ('n'):
		exitGame();
		break;

	default:
		cout << "An error occured in the play again logic" << endl;
	}


}


void RPSGame::exitGame()
{
	return;
}
