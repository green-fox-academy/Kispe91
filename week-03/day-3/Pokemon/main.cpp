#include <iostream>
#include <vector>

#include "pokemon.h"
#include "pokemon.cpp"

std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Balbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikatchu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Balbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}

int main(int argc, char* args[])
{
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();


    // Every pokemon has a name and a type.
    // Certain types are effective against others, e.g. water is effective against fire.

    // Ash has a few pokemon.
    // A wild pokemon appeared!

    Pokemon wildPokemon("Oddish", "leaf", "water");

    for (int i = 1; i < pokemonOfAsh.size(); ++i) {
        if (pokemonOfAsh[i].isEffectiveAgainst(wildPokemon))
            std::cout << "I choose You, " <<  pokemonOfAsh[i].getName()<< std::endl;
    }
    // Which pokemon should Ash use?


    return 0;
}