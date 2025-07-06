#include <iostream>
using namespace std;



class fireType
{
	

public:	
	string Pokename = "N/A";
	int health = 100;

	//health function
	int Health() {
		return health;
	}

	//attack function
	int Attack() {
		return damageDealt;
	}

	string PokemonName(string name) {
		Pokename = name;
		return name;
	}

	string ShowPokemonName() {
		if (Pokename == "N/A") {
			cout << "No Pokémon name has been set." << endl;
			return "N/A";
		}
		return this->Pokename;
	}

	int ShowHealth() {
		if (health <= 0) {
			cout << "Your Pokémon has fainted." << endl;
			return 0;
		}
		return this->health;
	}

private:
	// number of fire-type Pokémon damage dealt
	int damageDealt = 2;
	
	
	

};

