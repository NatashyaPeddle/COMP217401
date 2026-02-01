#include <iostream>
#include "CharacterStats.h"
using namespace std;
//CharacterStats.cpp

//Convert enum to string
string stringClass(CharacterClass role) {
	switch (role) {
		case CharacterClass::Warrior: return "Warrior";
		case CharacterClass::Mage: return "Mage";
		case CharacterClass::Archer: return "Archer";
		default: return "Missing Class";
	}
}

//print character stats------------------------------------------------
void printStats(const CharacterStats& stats) {
	cout << "Character Stats: " << "Class: " << stringClass(stats.characterClass) << endl;
	cout << "Health: " << stats.health << ", Mana: " << stats.mana << ", Stamina: " << stats.stamina << endl;
}