#include "Tool.hpp"


// default constructor, strength set to 1
Tool::Tool()
{
	strength = 1;
}

// descturctor
Tool::~Tool()
{

}

// overload constructor so user can specify strength
Tool::Tool(int strength)
{
	this->strength = strength;
}