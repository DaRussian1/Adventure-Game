#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

class Player {
public:
	std::string player_name;
	int player_hp;
	int armor;
};

class Monster {
public:
	std::string monster_name;
	int monster_hp;
	int monster_damage;
};

int main() {
	
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
	monster.monster_hp = 100;
	monster.monster_damage = monstdama;
	monster.monster_name = MonsterName[Monst];
	
}
