#pragma once

#include "point.h"

const int  FIELD = 100;

class MagicCreature {
public:
    int lives;
    Point coordinatesAtTheMoment;

    virtual void go(int x, int y) = 0;

    virtual void shoot(int whereX, int whereY) const = 0;

    virtual MagicCreature *clone() = 0;
};
