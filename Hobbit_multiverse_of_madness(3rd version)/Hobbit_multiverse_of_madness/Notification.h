#pragma once
#include<iostream>
#include<string>
#include"Character.h"
#include"Item.h"
using namespace std;

// Function to start the fight
bool action(Enemy* enemy, Main_character* player) {
	cout << "You have encountered a " << enemy->getName() << endl;
	if (current > 1)
	{
		cout << "Choose the Pokemon that will assist you in this fight. You can choose by typing a correspondent number:" << endl;
		for (int i = 0; i < current; i++)
			{
				if (inventory[i]->getNumber() != 0)
				{
					cout << inventory[i]->getNumber() << " - " << inventory[i]->getName() << endl;
				}
			}
		// Presenting user with a choice
		char poke_input;
		bool poke_check = true;
		while(poke_check)
			{
				cin >> poke_input;
				for (int i = 0; i < current; i++)
				{
					if ((int)poke_input - 48 == inventory[i]->getNumber())
					{
						player->changeWeapon(inventory[i]);
						poke_check = false;
						break;
					}
				}
				if (poke_check)
				{
					cout << "I am afraid there is no such Pokemon. Check your inventory above and type again.\n";
				}
			}
	}
	// Or just wielding the only pokemon
	else if (current == 1)
	{	
		player->changeWeapon(inventory[0]);
	}
	bool boost = false;
	if (player->getWeapon()->getDamageType() == enemy->getWeakness() || player->getWeapon()->getDamageType() == "omnipotent") {
		cout << "The enemy is vulnerable to your Pokemon's element. Your damage has been temporarily increased." << endl;
		player->setDamage(10);
		boost = true;
	}
	if (enemy != nullptr) {
		string choice;
		while (player->getHealth() > 0 && enemy->getHealth() > 0) {
			
			cout << "Battle Status: Player Health - " << player->getHealth()
				<< ", Enemy Health - " << enemy->getHealth() << endl;
			cout << "Choose your action (A - Regular attack, B - Focused attack): ";
			cin >> choice;
			if (choice == "A" || choice == "a")
			{
				player->attack(enemy);
			}
			else if (choice == "B" || choice == "b")
			{
				player->special_attack(enemy);
			}
			else {
				//Punishing the player)
				cout << "Invalid choice. Please choose 'A' to attack.\n";
				enemy->attack(player);
			}

			

			if (enemy->getHealth() <= 0) {
				cout << "You defeated the enemy! You Win!" << endl << endl;
				if (boost)
					player->setDamage(-10);
				return true;; // Exit the battle loop
			}
			enemy->attack(player);
		}

		
		if (player->getHealth() <= 0) {
			cout << "You were defeated by the enemy. Game Over!" << endl;
			if (boost)
				player->setDamage(-10);
			return false;
		}
	}
	else {
		// Notify if there is no enemy associated with this response
		cout << "Error: No enemy associated with this response!" << endl;
	}
}


// The abstract text class to group all of the other categories
class Text
{
protected:
	// Letter associating this text box with user's choice
	char identifier;
	// The text itself
	string text;
	// Pointer to the next text box
	Text* next;
public:
	virtual bool text_out() = 0;
	// Moves to the next text box (if it exists)
	bool move_on()
	{
		if (next != nullptr)
		{
			return next->text_out();
		}
		else
		{
			cout << "\n***\n\n";
			return true;
		}
	}
	// Getter for identifier
	char getAnswer()
	{
		return identifier;
	}
	virtual ~Text() {}
};

// A class for pure text without user input
class Basict : public Text
{
public:
	//default constructor
	Basict() {}
	//desctructor
	~Basict() {}
	//constructor with user-defined values
	Basict(string t, Text* n_t, char i = 'p')
	{
		identifier = i;
		text = t;
		next = n_t;
	}
// Print the text
	bool text_out()
	{
		string input_imitation;
		cout << text;
		// Ask for any input
		getline(cin, input_imitation);
		if (input_imitation == "SURRENDER")
		{
			cout << "You surrendered.";
			return false;
		}
		else
		{
			// Go to the next
			return move_on();
		}
	}
};
//class for fighting event
class Event : public Text
{
	// Pointers to the two character involved in a fight
	Enemy* enemy;
	Main_character* player;
	Pokemon* upgrade{ nullptr };
public:
	Event() {}
	~Event() {}
	Event(string t, Text* n_t, Enemy* e, Main_character* p, char i = 'p')
	{
		identifier = i;
		text = t;
		next = n_t;
		enemy = e;
		player = p;
	}
	Event(Pokemon* upgrade, string t, Text* n_t, Enemy* e, Main_character *p, char i = 'p')
	{
		identifier = i;
		text = t;
		next = n_t;
		enemy = e;
		player = p;
		this->upgrade = upgrade;
	}
	// Printing the text box
	bool text_out()
	{
		// Fight sequence
		if (action(enemy, player))
		{
			//getting new pokemon
			if (upgrade != nullptr) {
				cout << "Congratulations! You have found new Pokemon: " << upgrade->getName() << ", (element: " << upgrade->getDamageType() << ")" << endl;
				upgrade->unlock();
			}
			player->Regen();
			string input_imitation;
			// Imitating input
			cout << text;
			cin.ignore();
			getline(cin, input_imitation);
			if (input_imitation == "SURRENDER")
			{
				return false;
			}
			// Next text box	
			return move_on();
		}
		else
		{
			return false;
		}
	}
};

// A text box for making a choice between two next choices
class Pivot : public Text
{
	// The two new choices
	Text* additional_choice;
public:
	//constructor
	Pivot() {}
	//destructor
	~Pivot() {}
	//constructor with user-defined values
	Pivot(string t, Text* n_t, Text* a_c, char i = 'p')
	{
		identifier = i;
		text = t;
		next = n_t;
		additional_choice = a_c;
	}
	//moving on to the next txt
	bool move_on(Text* ptr)
	{
		if (ptr != nullptr)
		{
			return ptr->text_out();
		}
		else
		{
			cout << "\n***\n\n";
			return true;
		}
	}
	//printing the text
	bool text_out()
	{
		char input;
		bool input_check = true;
		cout << text;
		while (input_check)
		{
			cin >> input;
			cin.ignore();
			if ((char)tolower(input) == next->getAnswer())
			{
				return move_on(next);
			}
			else if ((char)tolower(input) == additional_choice->getAnswer())
			{
				return move_on(additional_choice);
			}
			else
			{
				cout << "I am afraid that this is not a possible answer. Make sure you type one of the choices above.\n";
			}
		}
	}
};