#include <iostream>
#include "implementation/game.h"

int main(){
    Game myGame;
    HerosArmy FrodosArmy;
    Army* heros = myGame.createArmy(FrodosArmy);
    std::cout << "heros are created" << std::endl;
    VillainsArmy SayronsArmy;
    std::cout << "villains are created" << std::endl << "we have done them";
    Army* villains = myGame.createArmy(SayronsArmy);
    return 0;
}
