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
	int tool;

	//TODO: implement tool selection for AI?
	int computerToolChoice;

	// start RPS prompts
	cout << endl;
	cout << "Welcome to Rock, Paper, Scissors! Do you want to choose different strengths for the tools? (Y/N): ";
	choose_tool_strength = validateYesNo(yes_or_no);
	cout << endl;

	//Sets tool strength as defined by the user
	if (choose_tool_strength)
	{
		int rockStr;
		int paperStr;
		int scissorStr;
		cout << "Please choose a tool strength for rock: ";
		cin >> rockStr;
		cout << "Please choose a tool strength for paper: ";
		cin >> paperStr;
		cout << "Please choose a tool strength for scissor: ";
		cin >> scissorStr;
	
		Rock setStrength(rockStr);
		Paper setStrength(paperStr);
		Scissors setStrength(scissorStr);

	}
	else
	{
		Rock();
		Paper();
		Scissors();
	}

	cout << "Choose your tool (r - rock, p - paper, s-scissor, e - exit): ";
	tool = validateToolChoice(toolChoice);

	if (tool == 1) {
		// rock
	}
	else if (tool == 2) {
		// paper
	}
	else if (tool == 3) {
		// scissors
	}
	else if (tool == 4) {
		// exit game
		return;
	}


}


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


void RPSGame::exitGame()
{
	return;
}
