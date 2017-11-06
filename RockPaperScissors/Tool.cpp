/*********************************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Tool class implemenation file for a Rock Paper Scissors game
**
** To run this program, simply run the RPSGame file after compiling
*********************************************************************************/

#include "Tool.hpp"

// default constructor
Tool::Tool()
{
}

// deconstructor
Tool::~Tool()
{

}

//Sets strength for the Tool
void Tool::SetStrength(int incStr)
{
	strength = incStr;
}

//Returns strength of the Tool
int Tool::GetStrength() //Returns strength of tool

{
	return strength;
}

void Tool::SetType(int incType)
{
	type = incType;
}

char Tool::GetType()
{
	return type;
}
/* // overload constructor so user can specify strength
Tool::Tool(int strength)
{
this->strength = strength;
}
*/