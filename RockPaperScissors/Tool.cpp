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



/* // overload constructor so user can specify strength
Tool::Tool(int strength)
{
	this->strength = strength;
}
*/