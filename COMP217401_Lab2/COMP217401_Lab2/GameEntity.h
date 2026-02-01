#pragma once
#include <iostream>
#include <string>
using namespace std;

//Base class
class GameEntity {
protected:
	int id;

public:

	//Constructor
	GameEntity(int idValue) : id(idValue) {}

	//Returns Id
	int getId() const {
		return id;
	}

	//Polymorphic print info
	virtual void printInfo() const {
		cout << "Id and Entity Type: " << id << endl;
	}

	//Destructor
	virtual ~GameEntity() {}
};