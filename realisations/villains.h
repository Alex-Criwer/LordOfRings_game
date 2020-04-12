#pragma once

#include "army_factory.h"

class VillainsArmy : public ArmyFactory {
public:
    vector<Hobbit *> createHobbits() override;

    vector<Elf *> createElfs() override;

    vector<Dwarf *> createDwarfs() override;

    vector<Magician *> createMagicians() override;

    vector<Nazgul *> createNazguls() override;
};
