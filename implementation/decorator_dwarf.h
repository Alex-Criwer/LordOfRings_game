#pragma once

#include "decorator_magic_creature.h"
#include "dwarf.h"

class DecoratorDwarf: public DecoratorMagicCreatures {
public:
    DecoratorDwarf(MagicCreature *dwarf);

    void go(int x, int y) override;

    void abilityToFlyOnGriffins();

    void abilityToBeResaved();

    void abilityOfSuperKick();
};