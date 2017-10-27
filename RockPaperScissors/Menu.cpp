#include "Menu.hpp"
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

Menu::Menu()
{
}

Menu::~Menu()
{

}

void Menu::Add(string menuItem)
{
	menu_list.push_back(menuItem);

	// std::cout << menuItem << " was added to the menu." << std::endl;
}

int Menu::Count()
{
	// used to validate user selection
	return menu_list.size();
}

void Menu::RemoveLast()
{
	if (!menu_list.empty())
	{
		menu_list.pop_back();
	}
	else {
		std::cout << "Menu is Empty" << std::endl;
	}
}

void Menu::printAll()
{
	std::cout << "<========== ** MENU ** ==========>" << std::endl;

	for (std::size_t i = 0; i < menu_list.size(); i++)
	{
		std::cout << i + 1 << ": " << menu_list[i] << std::endl;
	}

	std::cout << "<================================>" << std::endl;
}