#include <iostream>
#include "GameUtils.h"
#include "CharacterStats.h"
using namespace std;
//main.cpp

class Item {
	public:
	Virtual function void use() = 0;
	string name;
};

class HealthPotion : Item {
	public:
	void use() override {
		cout << "Using Health Potion: Restores 50 health." << endl;
	}
};

class ManaPotion : Item {
	public:
	void use() override {
		cout << "Using Mana Potion: Restores 25 mana." << endl;
	}
};

class Inventory {
	static array Item*{};
};

//MAIN ----------------------------------------------------------------------------
int main() {
	/*Create a CharacterStats variable on the stack for a Warrior with health = 100, mana = 50, stamina = 75.
	Use pointers and references to pass the struct to printStats.
	Create a Mage character on the heap using createCharacterOnHeap, print stats, then delete it.
	Explain in comments where variables are stored in RAM(stack vs heap).Step 4 : Pass by Value vs Pass by Reference*/

	//warrior
	cout << "----------- Warrior Character ----------- " << endl;
	CharacterStats warrior{ 100,50,75, CharacterClass::Warrior };
	printStats(warrior);


	//Mage - On Heap allocation 
	cout << "------------ Mage Character --------- " << endl;
	CharacterStats* mage = createCharacterOnHeap(101, 51, 76, CharacterClass::Mage);
	printStats(* mage);
	deleteCharacter(mage);
	
	
	
	return 0;
}

