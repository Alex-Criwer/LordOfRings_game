#pragma once

#include "army.h"
#include "heros.h"
#include "villains.h"

class Game{
public:
    Army* createArmy(ArmyFactory& factory){
        Army* newArmy = new Army();
        newArmy->addHobbits(factory.createHobbits());
        newArmy->addElfs(factory.createElfs());
        newArmy->addDwarfs(factory.createDwarfs());
        newArmy->addMagicians(factory.createMagicians());
        newArmy->addNazguls(factory.createNazguls());
        return newArmy;
    }
};