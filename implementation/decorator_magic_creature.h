#pragma once

#include "magic_creature.h"
#include <iostream>

class DecoratorMagicCreatures : public MagicCreature{
protected:
    MagicCreature* magic_creature;
public:
    DecoratorMagicCreatures(): magic_creature(nullptr){}

    DecoratorMagicCreatures(MagicCreature* magic_creature);

    void go(int x, int y) override ;
    void shoot(int whereX, int whereY) const override ;

    MagicCreature *clone() override;
};