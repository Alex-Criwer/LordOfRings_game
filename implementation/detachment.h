#pragma once

#include "army.h"
#include "decorator_hobbit.h"
#include "decorator_elf.h"
#include "decorator_dwarf.h"

class Detachment {
    std::vector<MagicCreature *> new_detechment;

public:
    Detachment();

    Detachment(Army *army,const int numberOfHobbits, const int numberOfElfs,const int numberOfDwarfs,const int numberOfMagicians, const int numberOfNazguls);

    void addMagicCreature(MagicCreature *magic_creature);

    void detechmentShoot(const int whereX, const int whereY);

    void detechmentGo(const int x, const int y);

    friend std::vector<MagicCreature *> *getVectorOfCreatures(Detachment *myDetachment);

    void makeSuperDetachment();

    ~Detachment();
};

