#pragma once
#include <iostream>
#include <string>
#include "Character.h"
using namespace std;

static int current = 0;

class Item {
protected:
    //variable
    int amount;
public:
    //constructors
    Item(int amount) : amount(amount) {};
    Item() {}
    //getter
    int getAmount() {
        return amount;
    }
};
//derived class 1
class HealthPotion : public Item {
protected:
    int regen; // Amount of health restored by the potion
    //here variable "amount" is number of potions character currently has
public:
    // Constructor
    HealthPotion(int amount, int health_plus) : Item(amount), regen(health_plus) {}
    //returns the amount of HP restored
    int getRegen() {
        return regen;
    }
    //sets the amount of potions player has
    void setAmount(int value) {
        amount += value;
    }
};


class Pokemon : public Item {
protected:
    //new variables
    int number = 0;
    string element = "";
    string name = "";
    //here amount is synonym of damage
public:
    virtual ~Pokemon() {}
    //getters
    string getDamageType() {
        return element;
    }
    string getName() {
        return name;
    }
    int getNumber()
    {
        return number;
    }
    void unlock();
};

// Constant for Pokemons
const int POKEMON_NUMBER = 9;

// And their inventory
Pokemon* inventory[POKEMON_NUMBER];

void Pokemon:: unlock() {
        inventory[current] = this;
        current++;
        number = current;
}
//ready types of pokemons
class Default : public Pokemon {
public:
    Default() {
        this->name = "Dagger";
        this->element = "none";
        this->amount = 10;
    }
    ~Default() {}
};

class Gumi : public Pokemon {
public:
    Gumi() {
        this->name = "Gumi";
        this->element = "water";
        this->amount = 15;
    }
    ~Gumi() {}
};

class Volcanion : public Pokemon {
public:
    Volcanion() {
        this->name = "Volcanion";
        this->element = "fire";
        this->amount = 25;
    }
    ~Volcanion() {}
};

class Fletchinder :public Pokemon {
public:
    Fletchinder() {
        this->name = "Fletchinder";
        this->element = "air";
        this->amount = 20;
    }
    ~Fletchinder() {}
};

class Dublade : public Pokemon {
public:
    Dublade() {
        this->name = "Dublade";
        this->element = "earth";
        this->amount = 25;
    }
    ~Dublade() {}
};

class Frogadier : public Pokemon {
public:
    Frogadier() {
        this->name = "Frogadier";
        this->element = "water";
        this->amount = 20;
    }
    ~Frogadier () {}
};

class Exeggcute : public Pokemon {
public:
    Exeggcute() {
        this->name = "Exeggcute";
        this->element = "earth";
        this->amount = 20;
    }
    ~Exeggcute() {}
};

class Rapidash : public Pokemon {
public:
    Rapidash() {
        this->name = "Rapidash";
        this->element = "air";
        this->amount = 20;
    }
    ~Rapidash() {}
};

class Ponyta : public Pokemon {
public:
    Ponyta() {
        this->name = "Ponyta";
        this->element = "fire";
        this->amount = 20;
    }
    ~Ponyta() {}
};

class Maiev : public Pokemon {
public:
    Maiev() {
        this->name = "Maiev's Skull";
        this->element = "omnipotent";
        this->amount = 30;
    }
    ~Maiev() {}
};