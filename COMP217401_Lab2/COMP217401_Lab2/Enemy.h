#pragma once
#include "GameEntity.h"

//Enemy Entity Class with Health property
class Enemy : public GameEntity {
private:
	int health;

public:
	//Constructor
	Enemy(int idVal, int hp) : GameEntity(idVal), health(hp) {}


	//Overrides printInfo
	void printInfo() const override {
		cout << "Type: Enemy, ID: " << id << ", Health: " << health << endl;
	}
};