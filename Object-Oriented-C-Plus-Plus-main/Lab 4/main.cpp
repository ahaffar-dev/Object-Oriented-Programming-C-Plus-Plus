#include "RPG.h"
#include <iostream>

using namespace std;

void gameLoop(RPG* player1, RPG* player2);
void displayStats(RPG player1, RPG player2);
void displayEnd(RPG player1, RPG player2);

int main() {
    RPG player("Wiz", 75, 45, 15, "mage");
    RPG npc;  

    gameLoop(&player, &npc);

    displayEnd(player, npc);

    return 0;
}

void gameLoop(RPG* player1, RPG* player2) {
    while (player1->isAlive() && player2->isAlive()) {
        displayStats(*player1, *player2);

        cout << player1->getName() << "'s turn" << endl;
        (*player1).useSkill(player2);

        if (!player2->isAlive()) {
            cout << player1->getName() << " defeated " << player2->getName() << "! Good game!" << endl;
            break;
        }
        cout << player2->getName() << "'s turn" << endl;
        (*player2).useSkill(player1);

        if (!player1->isAlive()) {
            cout << player2->getName() << " defeated " << player1->getName() << "! Better luck next time." << endl;
            break;
        }
    }
}


void displayStats(RPG player1, RPG player2) {
    cout << player1.getName() << " health: " << player1.getHealth()
        << "  " << player2.getName() << " health: " << player2.getHealth() << endl;
}

void displayEnd(RPG player1, RPG player2) {
    cout << "Final Stats:" << endl;
    displayStats(player1, player2);
    if (player1.isAlive()) {
        cout << player1.getName() << " is the winner!" << endl;
    }
    else {
        cout << player2.getName() << " is the winner!" << endl;
    }
}
