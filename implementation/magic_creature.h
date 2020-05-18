#pragma once

#include "point.h"
#include "visitor.h"

class MagicCreature {
public:
    static const int FIELD = 100;
    int lives;
    Point coordinatesAtTheMoment;
    bool abilityToFlyOnGriffins = false;

    virtual void go(int x, int y) = 0;

    virtual void shoot(int whereX, int whereY) const = 0;

    virtual MagicCreature *clone() = 0;
};

