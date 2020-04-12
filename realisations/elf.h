#pragma once
#include <iostream>
#include "magic_creature.h"
#include "constants.h"

class Elf : public MagicCreature {
private:
    friend bool operator !=(const Elf& a, const Elf& b);
    int arrows;
public:
    Elf();

    void go(int x, int y);

    void shoot(int whereX, int whereY) const ;

    void archery(int whereX, int whereY);

    Elf *clone();

};
