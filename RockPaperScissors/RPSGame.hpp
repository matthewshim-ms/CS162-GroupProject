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
	int humanWins;
	int computerWins;
	int ties;
	int rockStr = 1;
	int paperStr = 1;
	int scissorStr = 1;
	void validateIntegerInput(int& input);
	int validateToolChoice(char& input);
	bool validateYesNo(string &input);

public:
	RPSGame();
	~RPSGame();
	void RPSMenu();
	void exitGame();
	void startGame();
};


#endif 