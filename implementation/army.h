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
    void addHobbits(const std::vector<Hobbit *>& armyOfHobbits);

    void addElfs(const std::vector<Elf *>& armyOfElfs);

    void addDwarfs(const std::vector<Dwarf *>& armyOfDwarfs);

    void addMagicians(const std::vector<Magician *>& armyOfMagicians);

    void addNazguls(const std::vector<Nazgul *>& armyOfNazguls);

    friend std::vector<Hobbit *> * getVectorOfHobbits(Army* myArmy);

    friend std::vector<Elf *>* getVectorOfElfs(Army* myArmy);

    friend std::vector<Dwarf *>* getVectorOfDwarfs(Army* myArmy);

    friend std::vector<Magician *>* getVectorOfMagicians(Army* myArmy);

    friend std::vector<Nazgul *>* getVectorOfNazguls(Army* myArmy);

    ~Army();
};
