#pragma once

#include "iostream"
#include "magic_creature.h"

class Nazgul : public MagicCreature {
    static const int NAZGUL_LIVES = 50;

    friend bool operator!=(const Nazgul &a, const Nazgul &b);

public:
    Nazgul();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    void justToKill();

    Nazgul *clone();
};

