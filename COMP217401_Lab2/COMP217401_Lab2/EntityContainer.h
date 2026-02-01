#pragma once
#include <vector>
using namespace std;

//Template class for entities
template <typename T>
class EntityContainer {
private:

	//Stack vector for storing pointers
	vector<T*> entities;

public:

	//Adds an entity to the container
	void addEntity(T* entity) {

		//Stores pointer in vector
		entities.push_back(entity);
	}


	//Removes entity from container
	void removeEntity(T* entity) {

		//If i and pointer match, remove pointer from vector
		for (auto i = entities.begin(); i != entities.end(); ++i) {
			if (*i == entity) {
				entities.erase(i);
				return;
			}
		}
	}

	//Uses id to find entity, returns nullptr if not found
	T* findEntityById(int id) {
		for (T* j : entities) {
			if (j->getId() == id) {
				return j;
			}
		}
		return nullptr;
	}

	//Prints all entities with polymorphism
	void printAllEntities() {
		for (T* k : entities) {
			k->printInfo();
		}
	}

	//Destructor
	~EntityContainer() {
		for (T* l : entities) {
			delete l;
		}
	}
};

//Uses a temp to swap the pointers of two entities, not the heap objects
template <typename T>
void swapEntities(T*& a, T*& b) {
	T* temp = a;
	a = b;
	b = temp;
}