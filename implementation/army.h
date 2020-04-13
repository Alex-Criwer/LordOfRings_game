#pragma once

#include <iostream>
#include <vector>
#include "hobbit.h"
#include "elf.h"
#include "dwarf.h"
#include "magician.h"
#include "nazgul.h"


class Army {
private:
    std::vector<Hobbit *> hobbits;
    std::vector<Elf *> elfs;
    std::vector<Dwarf *> dwarfs;
    std::vector<Magician *> magicians;
    std::vector<Nazgul *> nazguls;

    friend bool operator==(const Army &a, const Army &b);

public:
    void addHobbits(std::vector<Hobbit *> armyOfHobbits);

    void addElfs(std::vector<Elf *> armyOfElfs);

    void addDwarfs(std::vector<Dwarf *> armyOfDwarfs);

    void addMagicians(std::vector<Magician *> armyOfMagicians);

    void addNazguls(std::vector<Nazgul *> armyOfNazguls);

    ~Army();
};


