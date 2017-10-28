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


/* // overload constructor so user can specify strength
Tool::Tool(int strength)
{
	this->strength = strength;
}
*/