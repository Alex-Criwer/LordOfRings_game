#pragma once
#include <iostream>
#include <vector>
#include "hobbit.h"
#include "elf.h"
#include "dwarf.h"
#include "magician.h"
#include "nazgul.h"


class ArmyFactory{
public:
    virtual std::vector <Hobbit*> createHobbits() = 0;
    virtual std::vector <Elf*> createElfs() = 0;
    virtual std::vector <Dwarf*> createDwarfs() = 0;
    virtual std::vector <Magician*> createMagicians() = 0;
    virtual std::vector <Nazgul*> createNazguls() = 0;
};