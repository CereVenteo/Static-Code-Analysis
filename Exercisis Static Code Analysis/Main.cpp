#include <cstdio>
#include <string>
#include <time.h>

#include "Character.h"

#define MAX_STR_LEN 50

// this is a code with bugs with the purpose of testing the functionality CppCheck, CVG, and Sonarlint.

int main(int argc, char* args[])
{
	std::string character_name;
	Character* new_character = nullptr;

	srand(time(NULL));

	printf("Character Creator: \n");

	while (character_name.empty())
	{
		printf("Input your character name\n");

		char name_buffer[MAX_STR_LEN];
		scanf_s("%s", name_buffer, MAX_STR_LEN);
		character_name = name_buffer;
	}

	while (!new_character)
	{
		printf("\nchoose your class: Warrior, Mage, Rogue, Random\n");

		char class_buffer[MAX_STR_LEN];
		scanf_s("%s", class_buffer, MAX_STR_LEN);
		std::string character_class = class_buffer;

		if (character_class == "Random" || character_class == "Warrior" || character_class == "Mage" || character_class == "Rogue")
		{
			unsigned int random_class = NONE;

			if (character_class == "Random")
				random_class = rand() % 3;

			if (random_class == WARRIOR || character_class == "Warrior")
				new_character = new Character(character_name, WARRIOR);
			else if (random_class == MAGE || character_class == "Mage")
				new_character = new Character(character_name, MAGE);
			else if (random_class == ROGUE || character_class == "Rogue")
				new_character = new Character(character_name, ROGUE);
		}
		else
		{
			printf("\n invalid input!\n");
			character_class.clear();
		}

	}

	new_character->drawInfo();
	printf("\npress intro to quit");

	// Error detected with VGC.
	

	getchar();
	getchar();

	

	return 1;
}

