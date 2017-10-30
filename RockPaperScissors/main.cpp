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

//TODO Verify design fits design document
//TODO "You must also have your main function in a play_game.cpp file, separated from the class implementations."
//TODO Design/implement/break out of AI function
//TODO Improve design of gameloop
//TODO Input validation for tool strength input
//TODO Input validation for the playAgain function
//TODO Testing
//TODO Add additonal notes
//TODO Cleanup code
//TODO Reflection writeup

int main()
{
	srand(time(nullptr));

	// Game client
	RPSGame game = RPSGame();

	return 0;
}

