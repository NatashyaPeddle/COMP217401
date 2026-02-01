#pragma once
#include "GameEntity.h"
#include <string>
using namespace std;

//NPC Entity Class with Dialogue
class NPC : public GameEntity {
private:
	string dialogue;

public:
	//Constructor
	NPC(int idVal, string text) : GameEntity(idVal), dialogue(text) {}

	//Overrides printInfo
	void printInfo() const override {
		cout << "Type: NPC, ID: " << id << ", Dialogue: " << dialogue << endl;
	}
};