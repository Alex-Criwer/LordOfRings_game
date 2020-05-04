#pragma once

#include "decorator_magic_creature.h"
#include "hobbit.h"

class DecoratorHobbit: public DecoratorMagicCreatures {
public:
    DecoratorHobbit(MagicCreature *hobbit);

    void go(int x, int y) override;

    void abilityToFlyOnGriffins();

    void abilityToBeResaved();

    void abilityToTalkWithTheAncientForest();
};
