/*********************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/24/17
** Description: Main file for a dice game
**
** To run this program, simply execute the RPSGame file after compiling
*********************************************************************/

#ifndef RPSGame_HPP
#define RPSGame_HPP
#include "Player.hpp"
#include <string>

using std::string;

class RPSGame
{
private:
	Player* player;
	Player* computer;
	Tool* playerTool; //Tracks which tool the player has
	Tool* computerTool; //Tracks which tool the computer has
	int humanWins = 0;
	int computerWins = 0;
	int ties = 0;
	int playerRockStr = 0;
	int playerPaperStr = 0;
	int playerScissorsStr = 0;
	int computerRockStr = 0;
	int computerPaperStr = 0;
	int computerScissorsStr = 0;
	void validateIntegerInput(int& input);
	int validateToolChoice(char& input);
	bool validateYesNo(string &input);

public:
	RPSGame();
	~RPSGame();
	void RPSMenu();
	void gameLoop();
	void exitGame();
	void startGame();
	void toolFight(int, int);
	void playAgain();
};


#endif 