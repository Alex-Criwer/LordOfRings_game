#pragma once

#include "point.h"

class MagicCreature {
public:
    int lives;
    Point coordinatesAtTheMoment;

    virtual void go(int x, int y) = 0;

    virtual void shoot(int whereX, int whereY) const = 0;

    virtual MagicCreature *clone() = 0;
};
