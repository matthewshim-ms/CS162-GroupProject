#ifndef Menu_HPP
#define Menu_HPP

#include <string>
#include <vector>

using std::vector;
using std::string;

class Menu {

public:
	Menu();
	~Menu();
	void printAll();
	void Add(string menuItem); // adds menu item to the end of the vector
	void RemoveLast(); // pops last menu item off the vector
	int Count(); // returns the size of the vector to validate menu selection
private:
	vector<string> menu_list;
};
#endif 
