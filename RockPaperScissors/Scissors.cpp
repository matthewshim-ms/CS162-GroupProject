/*********************************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Scissors class implemenation file for a Rock Paper Scissors game
**
** To run this program, simply run the RPSGame file after compiling
*********************************************************************************/

#include "Scissors.hpp"

//Default constructor
Scissors::Scissors()
{
	SetStrength(-1);
	SetType('s');
}


Scissors::Scissors(int incStr)
{
	SetStrength(incStr);
	SetType('s');

}