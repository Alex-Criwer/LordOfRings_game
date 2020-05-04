#pragma once

#include "decorator_magic_creature.h"
#include "elf.h"

class DecoratorElf: public DecoratorMagicCreatures {
public:
    DecoratorElf(MagicCreature *elf);

    void go(int x, int y) override ;

    void abilityToFlyOnGriffins();

    void abilityToBeResaved();

    void abilityToBeSuperFast();
};