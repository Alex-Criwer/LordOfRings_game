#pragma once

#include <iostream>
#include "magic_creature.h"

class Magician : public MagicCreature {
private:
    static const int MAGICIAN_LIVES = 20, NUMBER_OF_BONUS_JUST_TO_KILL = 3;

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
