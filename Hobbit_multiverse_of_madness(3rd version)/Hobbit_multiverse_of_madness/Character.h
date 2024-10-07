#pragma once
#include <iostream>
#include <string>
#include "Item.h"
#include <ctime>
using namespace std;

static int maiev_power = 0;

void maiev_quote()
{
	int status = rand() % 5;
	switch (status)
	{
	case 0:
		cout << "'My talents are yours...'" << endl;
		break;
	case 1:
		cout << "'I shall destroy them...'" << endl;
		break;
	case 2:
		cout << "'I shall reclaim my queendom...'" << endl;
		break;
	case 3:
		cout << "'The hour of doom approaches...'" << endl;
		break;
	case 4:
		cout << "'Blood! I need more blood!..'" << endl;
		break;
	}
	return;
}

//funnction for random number
int Randomchik(int low_lim, int upper_lim) {
	srand(time(nullptr));

	return low_lim + rand() % (upper_lim - low_lim + 1);
}
//abstract class
class Character {
protected:
	int health=0;
	int damage=0;
public:
	//setters
	void setHealth(int value) {
		health += value;
	}
	void setDamage(int value) {
		damage += value;
	}
	//getters
	int getHealth() {
		return health;
	}
	int getDamage() {
		return damage;
	}
	bool isAlive() {
		return health > 0;
	}

};
//1st derived class
class Enemy : public Character {
protected:
	//variables
	string weakness;
	string name;
public:
	//contructor
	Enemy() {}
	//destructor
	virtual ~Enemy() {}
	//constructor with user-defined values
	
	//getters
	string getName() {
		return name;
	}
	string getWeakness() {
		return weakness;
	}
	//enemy's attack
	void attack(Character* example) {
		example->setHealth(-(Randomchik(1,damage)));
	}
};

//2nd derived class
class Main_character :public Character {
	
	//set of pointers to data
	Pokemon* weapon;
	HealthPotion* estus;
	//bool bonus_act;
public:
//default constructor
	Main_character() {

	}
	//constructor with user-defined values
	Main_character(Pokemon* sample, HealthPotion* estus) {
		health = 50;
		weapon = sample;
		damage = weapon->getAmount();
		this->estus = estus;
	}
	//getter
	Pokemon* getWeapon() {
		return weapon;
	}
	//attacks of Main character
	void attack(Enemy* example) {
		example->setHealth(-Randomchik(1,damage*2));
	}
	void special_attack(Enemy* example) {
		example->setHealth(-Randomchik(damage - 3, damage + 3));
	}
	//changing pokemons
	void changeWeapon(Pokemon* upgrade){
		weapon = upgrade;
		damage = weapon->getAmount();
		if (upgrade->getName() == "Maiev's Skull")
		{
			maiev_quote();
			maiev_power++;
		}
	}
	//restoring health
	void Regen() {
		
		if (estus->getAmount() > 0 and health < 50) {
			cout << "Do you want to heal yourself? (health potions left: " << estus->getAmount()<<")" << endl;
			cout << "Y - YES, anything else - NO" << endl;
			string choice;
			cin >> choice;
			if (choice == "Y" || choice == "y") {
				int plus;
				if (health + estus->getRegen() <= 50) {
					plus = estus->getRegen();
					health +=plus;

				}
				else {
					plus = (50 - health);
					health += plus;
				}
				estus->setAmount(-1);
				cout << "Health: +" << plus<<endl;
				cout << "Current health :" << health << endl << endl;
				if (estus->getAmount() == 0)
					cout << "No potions left." << endl << endl;
			}
		}
	}
};
//ready types of enemies;
//city
class Drainei : public Enemy {
public:
	Drainei() {
		health = 40;
		damage = 15;
		weakness = "fire";
		name = "DRANEI";
	}
	~Drainei() {}
};


//Cave
class Ricardo_Milidows : public Enemy {
public:
	Ricardo_Milidows() {
		health = 69;
		damage = 12;
		weakness = "water";
		name = "RICARDO MILIDOWS";
	}
	~Ricardo_Milidows() {}
};
class Bill_Helsing: public Enemy {
public:
	Bill_Helsing() {
		health = 50;
		damage = 12;
		weakness = "water";
		name = "BILL HELLSING";
	}
	~Bill_Helsing() {}
};
class Tri_Darkholme : public Enemy {
public:
	Tri_Darkholme() {
		health = 50;
		damage = 12;
		weakness = "fire";
		name = "TRI DARKHOLME";
	}
	~Tri_Darkholme() {}
};
class Big_Danny_Leonardo : public Enemy {
public:
	Big_Danny_Leonardo() {
		health = 69;
		damage = 12;
		weakness = "water";
		name = "BIG DANNY LEONARDO";
	}
	~Big_Danny_Leonardo() {}
};
class Allkam : public Enemy {
public:
	Allkam() {
		health = 69;
		damage = 15;
		weakness = "water";
		name = "ALLKAM";
	}
	~Allkam() {}
};
class Yaero_Slave : public Enemy {
public:
	Yaero_Slave() {
		health = 69;
		damage = 15;
		weakness = "water";
		name = "YAERO SLAVE";
	}
	~Yaero_Slave() {}
};

//Forest
class Vulpera : public Enemy {
public:
	Vulpera() {
		health = 10;
		damage = 5;
		weakness = "earth";
		name = "VULPERA";
	}
	~Vulpera() {}

};
class Traxex : public Enemy {
public:
	Traxex() {
		health = 20;
		damage = 7;
		weakness = "fire";
		name = "TRAXEX";
	}
	~Traxex() {}

};
class Maghteridon : public Enemy {
public:
	Maghteridon() {
		health = 60;
		damage = 15;
		weakness = "water";
		name = "MAGHTERIDON";
	}
	~Maghteridon() {}

};
//city

class Qiraj : public Enemy {
public:
	Qiraj() {
		health = 20;
		damage = 5;
		weakness = "air";
		name = "QIRAJ";
	}
	~Qiraj() {}
};

class Shivarra : public Enemy {
public:
	Shivarra() {
		health = 50;
		damage = 10;
		weakness = "air";
		name = "SHIVARRA";
	}
	~Shivarra() {}
};

class Elite_Shivarra : public Enemy {
public:
	Elite_Shivarra() {
		health = 60;
		damage = 15;
		weakness = "air";
		name = "ELITE SHIVARRA";
	}
	~Elite_Shivarra() {}
};

//ruins
class Centaur :public Enemy{
public:
	Centaur() {
		health =  25;
		damage = 10;
		weakness = "air";
		name = "CENTAUR";

	}
	~Centaur() {}
};

class Centaur_Warruiner :public Enemy {
public:
	Centaur_Warruiner() {
		health = 60;
		damage = 15;
		weakness = "earth";
		name = "CENTAUR WARRUINER";

	}
	~Centaur_Warruiner() {}
};

class Nevermore :public Enemy {
public:
	Nevermore() {
		health = 75;
		damage = 20;
		weakness = "absent";
		name = "NEVERMORE";

	}
	~Nevermore() {}
};