#pragma once

#include <iostream>
#include "magic_creature.h"

class Dwarf : public MagicCreature {
private:
    static const int NUMBER_OF_AXES = 10, DWARF_LIVES = 5;

    friend bool operator!=(const Dwarf &a, const Dwarf &b);

    int axes;
public:
    Dwarf();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    void hackAnotherCreature(int whereX, int whereY);

    Dwarf *clone();

    void Accept(Visitor *visitor) const;

};
