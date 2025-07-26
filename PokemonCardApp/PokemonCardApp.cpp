#include <iostream>
#include <list>

#include "FireType.cpp";
#include <string>



int main()
{
	fireType pokemon1; // Create an instance of the firetype class
	fireType pokemon2; // Create another instance of the firetype class
	fireType pokemon3; // Create a third instance of the firetype class

    
	list<fireType> pokemonList; // Create a list to hold firetype Pokemon


	string namechoice;
	string namechoice2;
	 // Create an instance of the firetype class
	cout << "Creating firetype Pokemon..." << endl;
	cout << "Enter the name of your Pokemon: ";
	cin >> namechoice; // Get the Pokemon name from user input
	pokemon1.PokemonName(namechoice);
	cout << "Pokemon Name: " << pokemon1.ShowPokemonName() << endl; // Display the Pokemon name

	cout << "Enter the name of your second Pokemon: ";
	cin >> namechoice2; // Get the second Pokemon name from user input
	pokemon2.PokemonName(namechoice2);
	cout << "Pokemon Name: " << pokemon2.ShowPokemonName() << endl; // Display the second Pokemon name
	
	cout << endl;
	cout << "Pokemon 1 attacks pokemon 2!" << endl;
	pokemon2.health -= pokemon1.Attack(); // Pokemon 1 attacks Pokemon 2

	cout << pokemon2.ShowPokemonName() << " has " << pokemon2.ShowHealth() << " health left." << endl; // Display remaining health of Pokemon 2

	int choice;
	cout << "choose a move for Pokemon 2: " << endl;
	cout << "1. Attack" << endl;
	cout << "2. Heal" << endl;
	cout << "3. Run" << endl;
	cin >> choice; // Get user choice for Pokemon 2's move

	
	
	switch (choice)
	{

	default:
			cout << "Invalid choice. Please try again." << endl;
			break;

	case 1:
		int userChoice = 1;
		int tick;
		while (userChoice != 0){// Loop until user chooses to stop attacking
			cout << "You chose to attack!" << endl;
			pokemon1.health -= pokemon2.Attack(); // Pokemon 2 attacks Pokemon 1
			cout << pokemon1.ShowPokemonName() << " has " << pokemon1.ShowHealth() << " health left." << endl;
			cout << "Do you wish to attack again? (1 for yes, 0 for no): ";
			cin >> tick; // Ask user if they want to attack again
			
			cout << endl;
			
			if (tick % 2 == 1) {
				cout << "You chose to attack again!" << endl;
				pokemon1.health -= pokemon2.Attack(); // Pokemon 2 attacks Pokemon 1 again
				cout << pokemon1.ShowPokemonName() << " has " << pokemon1.ShowHealth() << " health left." << endl; // Display remaining health of Pokemon 1
			}
			else if (tick % 2 == 0) {
				cout << "You chose not to attack again." << endl;
				break; // Exit the loop if user chooses not to attack again
			}
			
		}
	
	}
	
	pokemonList.push_back(pokemon1); // Add Pokemon 3 to the list
	pokemonList.push_back(pokemon2); // Add Pokemon 3 to the list
	pokemonList.push_back(pokemon3); // Add Pokemon 3 to the list

	pokemonList.sort(); // Sort the list of Pokemon by their names

}




