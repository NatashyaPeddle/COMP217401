#pragma once
#include <iostream>
//CharacterStats.h
enum class CharacterClass {
	Warrior, Mage, Archer
};

struct CharacterStats {
	int health;
	int mana;
	int stamina;
	CharacterClass characterClass;
};
void printStats(const CharacterStats& stats);