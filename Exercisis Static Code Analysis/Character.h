#ifndef _Character_H_
#define _Character_H_

#include <string>

enum CharacterClass 
{ 
	NONE = -1,
	WARRIOR, 
	MAGE, 
	ROGUE 
};

class Character
{
	friend class CharacterFactory;

private:
	std::string name = "";
	CharacterClass character_class = NONE;

	int strength = 0;
	int dexterity = 0;
	int perception = 0;
	int intelligence = 0;
	int charisma = 0;

public:

	Character() {};
	Character(std::string& _name, CharacterClass _character_class) : name(_name), character_class(_character_class) { setStats(); };

	void drawInfo();
	void setStats();

	void setName(char* _out_name) { name = _out_name; };
	void setClass(CharacterClass _character_class) { character_class = _character_class; };

	//Error detected with CppCheck.
	CharacterClass getClass() { return character_class; }
};

#endif //!__Character_H