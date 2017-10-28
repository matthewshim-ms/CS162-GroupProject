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
	void SetStrength(int); //Sets strength for the Tool
	~Tool();
};
#endif 