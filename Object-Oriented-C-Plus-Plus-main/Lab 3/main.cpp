#include "RPG.h"

int main() {
    RPG npc;
    RPG player("Wiz", 100, 15, 5, "mage");

    cout << player.getName() << " health: " << player.getHealth() << " NPC health: " << npc.getHealth() << endl;

    while (player.isAlive() && npc.isAlive()) {
   
        cout << player.getName() << "'s turn\n";
        player.useSkill(npc);

        if (!npc.isAlive()) {
            cout << player.getName() << " defeated " << npc.getName() << "! Good game!" << endl;
            break;
        }

  
        cout << "NPC's turn\n";
        npc.useSkill(player);

        if (!player.isAlive()) {
            cout << npc.getName() << " defeated " << player.getName() << "! Better luck next time." << endl;
            break;
        }
    }

    return 0;
}
