#pragma once

#include "army_factory.h"

const int VILLAINS_HOBBITS = 10,VILLAINS_ELFS = 3, VILLAINS_DWARFS = 10, VILLAINS_MAGICIANS = 3,VILLAINS_NAZGULS = 1;

class VillainsArmy : public ArmyFactory {
public:
    std::vector<Hobbit *> createHobbits() override;

    std::vector<Elf *> createElfs() override;

    std::vector<Dwarf *> createDwarfs() override;

    std::vector<Magician *> createMagicians() override;

    std::vector<Nazgul *> createNazguls() override;
};
