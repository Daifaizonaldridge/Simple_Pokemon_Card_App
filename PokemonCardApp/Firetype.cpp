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
			cout << "No Pok�mon name has been set." << endl;
			return "N/A";
		}
		return this->Pokename;
	}

	int ShowHealth() {
		if (health <= 0) {
			cout << "Your Pok�mon has fainted." << endl;
			return 0;
		}
		return this->health;
	}

private:
	// number of fire-type Pok�mon damage dealt
	int damageDealt = 2;
	
	
	

};

