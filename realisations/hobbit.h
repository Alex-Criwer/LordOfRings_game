#pragma once

#include <iostream>
#include "magic_creature.h"
#include "constants.h"

class Hobbit : public MagicCreature {
    friend bool operator!=(const Hobbit &a, const Hobbit &b);

public:
    Hobbit();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    Hobbit *clone();
};
