#pragma once
#include <iostream>
#include <vector>
#include "hobbit.h"
#include "elf.h"
#include "dwarf.h"
#include "magician.h"
#include "nazgul.h"

using std::vector;


class ArmyFactory{
public:
    virtual vector <Hobbit*> createHobbits() = 0;
    virtual vector <Elf*> createElfs() = 0;
    virtual vector <Dwarf*> createDwarfs() = 0;
    virtual vector <Magician*> createMagicians() = 0;
    virtual vector <Nazgul*> createNazguls() = 0;
};