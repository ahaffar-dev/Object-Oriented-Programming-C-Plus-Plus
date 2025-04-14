#include <iostream>
#include <vector>
#include "Charmander.h"
using namespace std;

Charmander::Charmander() : Pokemon() {
    skills.push_back("Ember");
    skills.push_back("Flamethrower");
    cout << "== Default Constructor (Charmander) ==\n";
}

Charmander::Charmander(string name, int hp, int atk, int def, vector<string> types)
    : Pokemon(name, hp, atk, def, types) {
    skills.push_back("Ember");
    skills.push_back("Flamethrower");
    cout << "== Param Constructor (Charmander) ==\n";
}

void Charmander::speak() {
    cout << "Charmander! Charmander!\n";
}

void Charmander::printSkill() {
    cout << "===== Print Skill =====\n";
    for (int i = 0; i < skills.size(); i++) {
        cout << skills[i] << endl;
    }
}
