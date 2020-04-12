#include <iostream>
#include "realisations/game.h"
using namespace std;
int main(){
    Game myGame;
    HerosArmy FrodosArmy;
    Army* heros = myGame.createArmy(FrodosArmy);
    cout << "heros are created" << endl;
    VillainsArmy SayronsArmy;
    cout << "villains are created" << endl << "we have done them";
    Army* villains = myGame.createArmy(SayronsArmy);
    return 0;
}
