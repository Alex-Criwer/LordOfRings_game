#pragma once

#include "iostream"
#include "magic_creature.h"
#include "constants.h"


class Nazgul : public MagicCreature {
    friend bool operator!=(const Nazgul &a, const Nazgul &b);

public:
    Nazgul();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    void justToKill();

    Nazgul *clone();
};

