#pragma once

#include <iostream>
#include "magic_creature.h"
#include "constants.h"

class Dwarf : public MagicCreature {
private:
    friend bool operator!=(const Dwarf &a, const Dwarf &b);

    int axes;
public:
    Dwarf();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    void hackAnotherCreature(int whereX, int whereY);

    Dwarf *clone();
};
