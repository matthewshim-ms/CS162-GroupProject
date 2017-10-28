/**************************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Scissors class header file for a Rock Paper Scissors game
**
** To run this program, simply run the RPSGame file after compiling
**************************************************************************/
#ifndef Scissors_HPP
#define Scissors_HPP

#include "Tool.hpp"

class Scissors : public Tool
{
private:
public:
	Scissors(); //Default constructor
	Scissors(int); //Custom constructor

};

#endif // !Scissors_HPP
