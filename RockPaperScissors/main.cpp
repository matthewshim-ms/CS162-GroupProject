/*********************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Main file for a dice game
**
** To run this program, simply run the RPSGame file after compiling
*********************************************************************/

#include "RPSGame.hpp"
#include <ctime>

int main()
{
	srand(time(nullptr));

	// Game client
	RPSGame game = RPSGame();

	return 0;
}

