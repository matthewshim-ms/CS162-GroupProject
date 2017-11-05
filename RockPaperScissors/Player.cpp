#include "Player.hpp"


Player::Player()
{
	this->isComputer = false;
}


Player::Player(bool isComputer)
{	
	if (isComputer) {
		this->isComputer = true;
	}
	else {
		this->isComputer = false;
	}
}
/*********************************************************************
** Function: Player::~Player()
** Description: deconstructor for player object, must also delete die object reference
*********************************************************************/
Player::~Player()
{

}

/*********************************************************************
** Function: Player::AddScore()
** Description: increments the player's score
*********************************************************************/
void Player::AddScore()
{
	score++;
}


/*********************************************************************
** Function: Player::getScore()
** Description: returns the player's score
*********************************************************************/
int Player::getScore()
{
	return score;
}


