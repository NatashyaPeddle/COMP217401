#include <iostream>
using namespace std;


//GAME OBJECT -----------------------------------------------------------------------
class GameObject {
private:
	int id;
	std::string name;

public: 
	//constructor
	GameObject(int id, string& name) : id(id), name(name) {
		cout << "GameObject Constructor Invoked" << endl; //gameobject constructor
	}

	//virtual destructor
	virtual ~GameObject() {
		cout << "GameObject Destructor Invoked" << endl; //gameobject Destructor
	}

	//getter
	int getId() {
		return id;
	}


	string getName() {
		return name;
	}
	
	// setters
	void setId(int i) {
		id = i;
	}

	void setName(string n) {
		name = n;
	}

	//virtual function printinfo() const
	virtual void printInfo()  {
		cout << "GameObject: ID: " << id << ", Name: " << name << endl;
	}
};

//PLAYER -----------------------------------------------------------------------

class Player : public GameObject {
private:
	int health;
	int score;

public:
	Player(int id, string& name, int health, int score) : GameObject(id, name), health(health), score(score) {
		cout << "Player Constructor Invoked" << endl; //player constructor
	}

	//GETTER
	int getHealth() {
		return health;
	}

	int getScore() {
		return score;
	}

	//SETTER
	void setHealth(int h) {
		health = h;
	}
	void setScore(int s) {
		score = s;
	}

	//OVERRIDE INFO
	virtual void printInfo() override {
		cout << "Player: ID: " << getId() << ", Name: " << getName() << ", Health: " << health << ", score: " << score << endl; 
	}
	// double check this ^^^^^ -------- I'm unsure if its correct

	//FUNCTIONS

	void takeDamage(int damage) {
		setHealth(health - damage); ///Not sure if this is correct
	}

	void addScore(int s) {

	}
};

//ENEMY -----------------------------------------------------------------------
class Enemy : public GameObject {
private:
	int damage;

public:
	Enemy(int id, string& name, int damage) : GameObject(id, name), damage(damage) {
		cout << "Enemy Constructor Invoked" << endl; //Enemy constructor
	}

	//GETTER
	int getDamage() {
		return damage;
	}

	//SETTER
	void setDamage(int d) {
		damage = d;
	}

	//OVERRIDE INFO
	virtual void printInfo() override {
		cout << "Enemy: ID: " << getId() << ", Name: " << getName() << ", Damage: " << damage << endl;
	}
	// double check this ^^^^^ -------- I'm unsure if its correct

};



//FREE FUNCTIONS -----------------------------------------------------------------------
void healByValue(Player p, int amount) {

}

void healByReference(Player& p, int amount) {

}
//POWERUP -----------------------------------------------------------------------

//MAIN -----------------------------------------------------------------------

int main() {

	return 0;
}