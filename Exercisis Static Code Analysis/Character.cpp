#include "Character.h"

#define STRONG_STAT 8
#define AVERAGE_STAT 6
#define WEAK_STAT 4

void Character::setStats()
{
	switch (character_class)
	{
	case WARRIOR:
		strength = (rand() % STRONG_STAT) + 3;
		dexterity = (rand() % AVERAGE_STAT) + 1;
		charisma = (rand() % AVERAGE_STAT) + 1;
		intelligence = (rand() % WEAK_STAT);
		perception = (rand() % WEAK_STAT);
		break;

	case MAGE:
		intelligence = (rand() % STRONG_STAT) + 3;
		charisma = (rand() % AVERAGE_STAT) + 1;
		perception = (rand() % AVERAGE_STAT) + 1;
		strength = (rand() % WEAK_STAT);
		dexterity = (rand() % WEAK_STAT);
		break;

	case ROGUE:
		perception = (rand() % STRONG_STAT) + 3;
		charisma = (rand() % AVERAGE_STAT) + 1;
		dexterity = (rand() % AVERAGE_STAT) + 1;
		intelligence = (rand() % WEAK_STAT);
		strength = (rand() % WEAK_STAT);
		break;
	}
}


void Character::drawInfo()
{
	std::string class_string;

	if (character_class == WARRIOR)		class_string = "Warrior";
	else if (character_class == MAGE)	class_string = "Mage";
	else							class_string = "Rogue";

	printf("%s, %s \n", name.c_str(), class_string.c_str());
	printf("\n STR: %d", strength);
	printf("\n DEX: %d", dexterity);
	printf("\n INT: %d", intelligence);
	printf("\n PER: %d", perception);
	printf("\n CHA: %d", charisma);
}