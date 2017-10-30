/*******************************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Paper class implementation file for a Rock Paper Scissors game
**
** To run this program, simply run the RPSGame file after compiling
********************************************************************************/
#include "Paper.hpp"

Paper::Paper() //Default constructor
{
	SetStrength(1);
	SetType('p');

}

Paper::Paper(int incStr) //Custom constructor
{
	SetStrength(incStr);
	SetType('p');

}