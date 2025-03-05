#ifndef RPG_H
#define RPG_H

#include <iostream>
#include <string>

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
public:
 
    RPG();
    RPG(string name, int health, int strength, int defense, string type);

    string getName() const;
    int getHealth() const;
    int getStrength() const;
    int getDefense() const;
    bool isAlive() const;

    void updateHealth(int new_health);
    void setSkills();
    void printAction(string skill, RPG& opponent);
    void attack(RPG& opponent);
    void useSkill(RPG& opponent);

private:
    string name;
    int health;
    int strength;
    int defense;
    string type;
    string skills[SKILL_SIZE];
};

#endif