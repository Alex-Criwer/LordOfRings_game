#pragma once

#include <iostream>
#include "magic_creature.h"


class Hobbit : public MagicCreature {
    int HOBBIT_LIVES = 3;

    friend bool operator!=(const Hobbit &a, const Hobbit &b);

public:
    Hobbit();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    Hobbit *clone();
};
