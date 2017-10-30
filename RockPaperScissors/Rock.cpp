/****************************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Rock class implemenation file for a Rock Paper Scissors game
**
** To run this program, simply run the RPSGame file after compiling
*****************************************************************************/

#include "Rock.hpp"


Rock::Rock() //Default constructor
{
	SetStrength(1);
	SetType('r');


}

Rock::Rock(int incStr) //Custom constructor
{
	SetStrength(incStr);
	SetType('r');


}