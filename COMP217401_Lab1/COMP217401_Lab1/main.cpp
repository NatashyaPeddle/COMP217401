#include <iostream>
using namespace std;

#define MAX_HEALTH 100
#define HEALTH_BOOST 25
#define SCORE_BOOST 50


//GAME OBJECT -----------------------------------------------------------------------
class GameObject {
private:
	int id;
	std::string name;

public: 
	//constructor
	GameObject(int id, const string& name) : id(id), name(name) {
		cout << "GameObject Constructor Invoked" << endl; //game object constructor
	}

	//virtual destructor
	virtual ~GameObject() {
		cout << "GameObject Destructor Invoked" << endl; //game object Destructor
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
	Player(int id, const string& name, int health, int score) : GameObject(id, name), health(health), score(score) {
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
	void printInfo() override {
		cout << "Player ID: " << getId() << ", Name: " << getName() << ", Health: " << health << ", score: " << score << endl; 
	}

	//FUNCTIONS

	void takeDamage(int damage) {
		health -= damage;
	}

	void addScore(int s) {
		score += s;
	}
};

//ENEMY -----------------------------------------------------------------------
class Enemy : public GameObject {
private:
	int damage;

public:
	Enemy(int id,  const string& name, int damage) : GameObject(id, name), damage(damage) {
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
	void printInfo() override {
		cout << "Enemy ID: " << getId() << ", Name: " << getName() << ", Damage: " << damage << endl;
	}

};



//FREE FUNCTIONS -----------------------------------------------------------------------
void healByValue(Player p, int amount) {
	p.setHealth(p.getHealth() + amount);
};

void healByReference(Player& p, int amount) {
	p.setHealth(p.getHealth() + amount);
};

//POWERUP -----------------------------------------------------------------------
class PowerUp {
	protected:
	std::string powerName;

	public:
	static int totalPowerUpsUsed;

	//virtual destructor
	virtual ~PowerUp() {
		cout << "PowerUp Destructor Invoked" << endl; //PowerUp Destructor
	}

	virtual void apply(Player& p) = 0;
};

class HealthBoost : public PowerUp {
	public:
	void apply(Player& p) override {
		int health = HEALTH_BOOST;
		int maxHealth = MAX_HEALTH;
		healByReference(p, health);

		cout << "Applying HealthBoost..." << endl;

		if (p.getHealth() > maxHealth) {
			p.setHealth(maxHealth);
		}

		totalPowerUpsUsed++;
	}
};

class ScoreBoost : public PowerUp {
	public:
	void apply(Player& p) override {
		int score = SCORE_BOOST;
		cout << "Applying ScoreBoost..." << endl;
		p.addScore(score);

		totalPowerUpsUsed++;
	}
};

int PowerUp::totalPowerUpsUsed = 0;

//MAIN -----------------------------------------------------------------------

int main() {
	Player player(10, "Adventurer", 75, 200);
	Enemy enemy(5, "Dragon", 20);

	GameObject* objectPlayer = &player;
	GameObject* objectEnemy = &enemy;

	cout << endl;

	objectPlayer->printInfo();
	objectEnemy->printInfo();

	cout << endl;

	//Applying Power Ups Loop
	PowerUp* powerUpArray[2];
	powerUpArray[0] = new HealthBoost();
	powerUpArray[1] = new ScoreBoost();

	for (int i = 0; i < 2; i++) {
		powerUpArray[i]->apply(player);
	}

	cout << endl;

	objectPlayer->printInfo();
	cout << "Total power-ups used: " << PowerUp::totalPowerUpsUsed << endl;

	cout << endl;

	return 0;
}