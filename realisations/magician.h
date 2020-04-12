#pragma once

#include <iostream>
#include "magic_creature.h"
#include "constants.h"

class Magician : public MagicCreature {
private:
    friend bool operator!=(const Magician &a, const Magician &b);

    int numberOfBonus;
public:
    Magician();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    void justToKill();

    void useMagic();

    Magician *clone();
};
