/*********************************************************************************
** Program Name: Rock Paper Scissors Game
** Author: Group 15
** Date: 10/23/17
** Description: Tool class header file for a Rock Paper Scissors game
**
** To run this program, simply run the RPSGame file after compiling
*********************************************************************************/

#ifndef Tool_HPP
#define Tool_HPP


class Tool
{
private:
	int strength = 0;
protected:
	char type = ' ';

public:
	Tool();
	// Tool(int strength);
	~Tool();
	void SetStrength(int incStr); //Sets strength for the Tool
	int GetStrength(); //Returns strength of tool
	void SetType(int incType); //Sets strength for the Tool
	char GetType(); //Returns strength of tool
	
};
#endif 