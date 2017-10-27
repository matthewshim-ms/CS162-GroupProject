#ifndef RPSGame_HPP
#define RPSGame_HPP
#include "Player.hpp"
#include <string>

using std::string;

class RPSGame
{
private:
	Player* player;
	Player* computer;
	int humanWins;
	int computerWins;
	int ties;
	void validateIntegerInput(int& input);
	int validateToolChoice(char& input);
	bool validateYesNo(string &input);

public:
	RPSGame();
	~RPSGame();
	void RPSMenu();
	void exitGame();
	void startGame();
};


#endif 