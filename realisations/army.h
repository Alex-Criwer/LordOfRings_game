#pragma once

#include <iostream>
#include <vector>
#include "hobbit.h"
#include "elf.h"
#include "dwarf.h"
#include "magician.h"
#include "nazgul.h"

using std::vector;


class Army {
private:
    vector<Hobbit *> hobbits;
    vector<Elf *> elfs;
    vector<Dwarf *> dwarfs;
    vector<Magician *> magicians;
    vector<Nazgul *> nazguls;

    friend bool operator==(const Army &a, const Army &b);

public:
    void addHobbits(vector<Hobbit *> armyOfHobbits);

    void addElfs(vector<Elf *> armyOfElfs);

    void addDwarfs(vector<Dwarf *> armyOfDwarfs);

    void addMagicians(vector<Magician *> armyOfMagicians);

    void addNazguls(vector<Nazgul *> armyOfNazguls);

    ~Army();
};


