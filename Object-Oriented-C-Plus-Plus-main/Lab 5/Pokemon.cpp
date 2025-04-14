#include <iostream>
#include <vector>
#include "Pokemon.h"
using namespace std;

Pokemon::Pokemon() {
    name = "Undefined";
    hitPoints = 0;
    attack = 0;
    defense = 0;
    cout << "== Default Constructor (Pokemon) ==\n";
}

Pokemon::Pokemon(string n, int hp, int atk, int def, vector<string> typ) {
    name = n;
    hitPoints = hp;
    attack = atk;
    defense = def;
    types = typ;
    cout << "== Param Constructor (Pokemon) ==\n";
}

void Pokemon::speak() {
    cout << "Pokemon speaks...\n";
}

void Pokemon::printSkill() {
    cout << "Skills are null\n";
}
