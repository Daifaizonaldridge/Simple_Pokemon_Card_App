#include <iostream>
using namespace std;
#include "FireType.cpp";
#include <string>



int main()
{
	fireType pokemon1; // Create an instance of the firetype class
	string namechoice;
	 // Create an instance of the firetype class
	cout << "Creating a firetype Pokemon..." << endl;
	cout << "Enter the name of your Pokemon: ";
	cin >> namechoice; // Get the Pokemon name from user input
	pokemon1.PokemonName(namechoice);
	cout << "Pokemon Name: " << pokemon1.ShowPokemonName() << endl; // Display the Pokemon name


}
