#include <iostream>
#include "CharacterStats.h"
using namespace std;
//CharacterStats.cpp

//print character stats------------------------------------------------
void printStats(const CharacterStats& stats) {
	cout << "Character Stats: " << "Class: " << endl; ///NEED TO ADD CLASS TO THIS LINE
	cout << "Health: " << stats.health << ", Mana: " << stats.mana << ", Stamina: " << stats.stamina << endl;
}