#include <iostream>
#include <vector>
#include "Charmander.h"
using namespace std;

int main() {
    vector<string> pokeTypes;
    pokeTypes.push_back("Fire");

    Charmander char1 = Charmander("Char1", 100, 4, 6, pokeTypes);
    cout << "== Line 1: Direct Speak ==\n";
    char1.speak();

    Pokemon* p = &char1;
    cout << "== Speak via pointer to Pokemon Pointer ==\n";
    p->speak();
    p->printSkill();

    return 0;
}
