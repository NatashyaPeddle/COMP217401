#include <iostream>
#include "GameInput.h"
#include "CharacterStats.h"
using namespace std;
//GameUtils.cpp


//creates / initalizes character---------------------------------------------------
CharacterStats* createCharacterOnHeap(int hp, int mp, int sp, CharacterClass cls) {
	CharacterStats* character = new CharacterStats;
	character->health = hp;
	character->mana = mp;
	character->stamina = sp;
	character->characterClass = cls;

	return character;
}

// deletes character----------------------------------------------------------------------
void deleteCharacter(CharacterStats* ptr) {
	delete ptr; ///deletes heap memory
}
