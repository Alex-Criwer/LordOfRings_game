#pragma once

#include "army_factory.h"

class VillainsArmy : public ArmyFactory {
public:
    static const int VILLAINS_HOBBITS = 1700, VILLAINS_ELFS = 150, VILLAINS_DWARFS = 700, VILLAINS_MAGICIANS = 70, VILLAINS_NAZGULS = 90;

    std::vector<Hobbit *> createHobbits() override;

    std::vector<Elf *> createElfs() override;

    std::vector<Dwarf *> createDwarfs() override;

    std::vector<Magician *> createMagicians() override;

    std::vector<Nazgul *> createNazguls() override;
};
