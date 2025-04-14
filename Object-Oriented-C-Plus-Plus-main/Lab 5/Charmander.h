#ifndef CHARMANDER_H
#define CHARMANDER_H

#include "Pokemon.h"   // Make sure this comes before using Pokemon
#include <string>
#include <vector>
using namespace std;

class Charmander : public Pokemon {
public:
    Charmander(string name, int hp, int atk, int def, vector<string> Atypes);
    void speak();
    void printSkill();

private:
    vector<string> skills;
};

#endif
