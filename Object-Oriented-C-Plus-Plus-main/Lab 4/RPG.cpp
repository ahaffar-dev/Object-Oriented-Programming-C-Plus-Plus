#include "RPG.h"



RPG::RPG() : name("NPC"), health(100), strength(10), defense(10), type("warrior") {
    setSkills();
}

RPG::RPG(string name, int health, int strength, int defense, string type)
    : name(name), health(health), strength(strength), defense(defense), type(type) {
    setSkills();
}


string RPG::getName() const { return name; }
int RPG::getHealth() const { return health; }
int RPG::getStrength() const { return strength; }
int RPG::getDefense() const { return defense; }
bool RPG::isAlive() const { return health > 0; }


void RPG::updateHealth(int new_health) {
    health = max(0, new_health);
}


void RPG::setSkills() {
    if (type == "mage") {
        skills[0] = "fire";
        skills[1] = "thunder";
    }
    else if (type == "thief") {
        skills[0] = "pilfer";
        skills[1] = "jab";
    }
    else if (type == "archer") {
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    }
    else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}


void RPG::printAction(string skill, RPG& opponent) {
    cout << name << " used " << skill << " on " << opponent.getName() << endl;
}


void RPG::attack(RPG* opponent) {
    if (opponent == nullptr) return;

    int damage = max(0, strength - opponent->getDefense());
    opponent->updateHealth(opponent->getHealth() - damage);
}


void RPG::useSkill(RPG* opponent) {
    if (opponent == nullptr) return;

    for (int i = 0; i < SKILL_SIZE; i++) {
        cout << "Skill " << i << ": " << skills[i] << endl;
    }

    int chosen_skill_index;
    cout << "Choose a skill to use: Enter 0 or 1" << endl;
    cin >> chosen_skill_index;

    if (chosen_skill_index < 0 || chosen_skill_index >= SKILL_SIZE) {
        cout << "Invalid choice! Defaulting to skill 0." << endl;
        chosen_skill_index = 0;
    }

    string chosen_skill = skills[chosen_skill_index];

    printAction(chosen_skill, *opponent);
    attack(opponent);  
}
