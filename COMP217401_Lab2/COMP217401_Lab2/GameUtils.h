#include <iostream>

#include "CharacterStats.h"

//GameUtils.h

CharacterStats* createCharacterOnHeap(int hp, int mp, int sp, CharacterClass cls);

void deleteCharacter(CharacterStats* ptr);
