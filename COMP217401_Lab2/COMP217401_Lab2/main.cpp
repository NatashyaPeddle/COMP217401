#include <iostream>
#include <vector>
#include "GameUtils.h"
#include "CharacterStats.h"
#include <string>
#include "GameEntity.h"
#include "EntityContainer.h"
#include "Enemy.h"
#include "NPC.h"
using namespace std;
//main.cpp

class Item {
public:
	string name = "test";
	virtual void use() = 0;
	virtual ~Item() {};
};

class HealthPotion : public Item {
public:
	HealthPotion() {
		name = "Health Potion";
	}
	void use() override {
		cout << "Using Health Potion: Restores 50 health." << endl;
	}
};

class ManaPotion : public Item {
public:
	ManaPotion() {
		name = "Mana Potion";
	}
	void use() override {
		cout << "Using Mana Potion: Restores 25 mana." << endl;
	}
};

class Inventory {
	//arrays
public:
	Item* quickSlots[5];
	Item** mainInventory;
	vector<Item*> questItems;

	//constructor
public:
	Inventory(int size) {
		mainInventory = new Item * [size];

		for (int i = 0; i < 5; i++) {
			quickSlots[i] = nullptr;
		}

		for (int i = 0; i < size; i++) {
			mainInventory[i] = nullptr;
		}
	}


	//functions
	//Quick Slot add/remove
	void addQuickItem(Item* i, int slot) {
		cout << "Added " << i->name << " to quick bar slot " << slot << endl;
		quickSlots[slot] = i;
	}

	void removeQuickItem(int slot) {
		cout << "Removed " << quickSlots[slot]->name << " from quick bar slot " << slot << endl;
		delete quickSlots[slot];
		quickSlots[slot] = nullptr;
	}

	//Inventory add/remove
	void addInventoryItem(Item* i, int slot) {
		cout << "Added " << i->name << " to inventory slot " << slot << endl;
		mainInventory[slot] = i;
	}

	void removeInventoryItem(int slot) {
		cout << "Removed " << mainInventory[slot]->name << " from inventory slot " << slot << endl;
		delete mainInventory[slot];
		mainInventory[slot] = nullptr;
	}

	//Quest Item add/remove
	void addQuestItem(Item* i) {
		cout << "Added " << i->name << " to quest inventory" << endl;
		questItems.push_back(i);
	}

	void removeQuestItem() {
		cout << "Removed " << questItems.back()->name << " from quest inventory" << endl;
		delete questItems.back();
		questItems.pop_back();
	}

	//Quick slot use
	void useItem(int slot) {
		quickSlots[slot]->use();
	}
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
	printStats(*mage);
	deleteCharacter(mage);



	//Item application
	cout << "\n\n TASK 2: ITEMS" << endl;
	Item* health;
	Item* mana;

	Inventory inventory(3);
	cout << "\n Quick Items being added" << endl;
	inventory.addQuickItem(health = new HealthPotion, 2);
	inventory.addQuickItem(mana = new ManaPotion, 4);

	cout << "\n Inventory Items being added" << endl;
	inventory.addInventoryItem(health = new HealthPotion, 1);
	inventory.addInventoryItem(health = new HealthPotion, 3);
	inventory.addInventoryItem(mana = new ManaPotion, 2);

	cout << "\n Quest Items being added" << endl;
	inventory.addQuestItem(mana = new ManaPotion);
	inventory.addQuestItem(health = new HealthPotion);
	inventory.addQuestItem(mana = new ManaPotion);
	inventory.addQuestItem(mana = new ManaPotion);
	inventory.addQuestItem(health = new HealthPotion);

	cout << "\n Quick Items being used" << endl;
	inventory.useItem(2);
	inventory.useItem(4);

	cout << "\n Quest Items being used" << endl;
	for (size_t i = 0; i < inventory.questItems.size(); i++) {
		inventory.questItems[i]->use();
	}

	cout << "\n Removing Items" << endl;
	inventory.removeQuickItem(4);
	inventory.removeInventoryItem(2);
	inventory.removeInventoryItem(3);
	inventory.removeQuestItem();
	inventory.removeQuestItem();
	inventory.removeQuestItem();

	//Task 3

	//Stack Variable
	EntityContainer<GameEntity> container;


	//Entities are pointers on stack
	//Objects created on heap
	GameEntity* enemy1 = new Enemy(1, 150);
	GameEntity* enemy2 = new Enemy(2, 200);
	GameEntity* npc1 = new NPC(3, "Hello Adventurer!");
	GameEntity* npc2 = new NPC(4, "Hey, you. You're finally awake.");

	container.addEntity(enemy1);
	container.addEntity(enemy2);
	container.addEntity(npc1);
	container.addEntity(npc2);

	cout << "\nAll Entities:" << endl;
	container.printAllEntities();

	cout << "\nSwapping Enemy Entities 1 and 2:\n";
	cout << "\nEnemy 1 Before:" << endl;
	enemy1->printInfo();
	cout << "\nEnemy 2 Before:" << endl;
	enemy2->printInfo();

	swapEntities(enemy1, enemy2);

	cout << "\nEnemy 1 After:" << endl;
	enemy1->printInfo();
	cout << "\nEnemy 2 After:" << endl;
	enemy2->printInfo();

	cout << "\nFinding Entity, ID 2:\n";
	GameEntity* found = container.findEntityById(2);

	if (found != nullptr) {
		found->printInfo();

		Enemy* cast = dynamic_cast<Enemy*>(found);
		if (cast != nullptr) {
			cout << "\nDynamic Cast Succeded\n" << endl;
		}

		else {
			cout << "\nDynamic Cast Failed\n" << endl;
		}
	}

	else {
		cout << "Failed to find Entity" << endl;
	}
}