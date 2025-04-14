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

    void useSkill(RPG* opponent);  
    void attack(RPG* opponent);    
    void updateHealth(int new_health);
    void setSkills();
    void printAction(string skill, RPG& opponent);

private:
    string name;
    int health;
    int strength;
    int defense;
    string type;
    string skills[SKILL_SIZE];
};


void gameLoop(RPG* player1, RPG* player2);
void displayStats(const RPG& player1, const RPG& player2);  
void displayEnd(const RPG& player1, const RPG& player2);    

#endif
