// Modules
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>


// Class for player/you
class Player {
public:
	std::string player_name;
	int player_hp;
	int armor;
};

// Class for monster
class Monster {
public:
	std::string monster_name;
	int monster_hp;
	int monster_damage;
};

 // Function for attack
void attack(std::string block_or_attack, int normal_attack, int monster_hp, int monster_damage) {
	
	std::cout << "You attacked!";
	std::cout << "\nYou dealt: " << normal_attack;
	int damage_monster = monster_hp - normal_attack;
}

// Function for block
void block(void) {
	
	std::cout << "You blocked";
	std::cout << "The monster attacked";
	std::cout << "Your block was successful";	
}

void Death(int monster_hp, int player_hp) {
	
	// Death for player
	if (player_hp == 0) {
		std::cout << "You have died";
	}
		
}

// Main func
int main(void) {
	
	// Identifiers
	std::string places;
	std::string block_or_attack;
	
	// Constructors
	Player player;
	Monster monster;
	
	// Monster Names
	std::string MonsterName[4] = {"Dung Beetle", "Spider", "Zombie", "Skeleton"};
	
	// Seeder
	std::srand(std::time(0));
	
	// Player Values
	player.player_hp = 100;
	player.armor = 150;
	std::cout << "Enter your player name: " << std::endl;
	std::cin >> player.player_name;
	
	// Monster Damage
	int monstdama = std::rand() % 30 + 1;
	player.player_hp -= monstdama;
	
	// Monster Name Gen
	int Monst = rand() % 4;
	
	// Monster Values
	monster.monster_hp = 50;
	monster.monster_damage = monstdama;
	monster.monster_name = MonsterName[Monst];
	
	// Attacks
	int normal_attack = 15;
	
	// Adventure
	std::cout << "Hello " << player.player_name << std::endl;
	}
}
