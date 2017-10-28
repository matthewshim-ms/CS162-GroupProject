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
	Tool(int strength);
	~Tool();
	void SetStrength(int incStr); //Sets strength for the Tool
	int GetStrength(); //Returns strength of tool
	
};
#endif 