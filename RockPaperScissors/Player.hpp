/*********************************************************************
** Program Filename: Player.hpp
** Author: Matthew Shim
** Date: 10/10/17
** Description: Class definition for Player. Player has a Die object,
a score, methods to manipulate the score and get the score.
*********************************************************************/
#ifndef Player_HPP
#define Player_HPP
#include "Tool.hpp"

class Player {
private:
	int score;
	bool isComputer;
	Tool* tool;

public:
	void AddScore();
	int getScore();
	Player();
	Player(bool isComputer);
	~Player();
};
#endif
