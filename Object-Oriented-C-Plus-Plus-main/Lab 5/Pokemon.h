#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>
using namespace std;

class Pokemon {
public:
    // ==================== Constructor ====================
    Pokemon(string name, int hp, int atk, int def, vector<string> type);

    // ==================== Virtual Functions ====================
    virtual void speak();
    virtual void printSkill();

protected:
    string name;
    int hitPoints;
    int attack;
    int defense;
    vector<string> types;
};

#endif
