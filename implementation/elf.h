#pragma once

#include <iostream>
#include "magic_creature.h"


class Elf : public MagicCreature {
private:
    const int ELF_LIVES = 10, NUMBER_OF_ARROWS = 10;

    friend bool operator!=(const Elf &a, const Elf &b);

    int arrows;
public:
    Elf();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const;

    void archery(int whereX, int whereY);

    Elf *clone();

};
