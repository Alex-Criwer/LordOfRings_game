#pragma once

#include "army_factory.h"

const int HEROS_HOBBITS = 20, HEROS_ELFS = 5, HEROS_DWARFS = 5, HEROS_MAGICIANS = 2, HEROS_NAZGULS = 1;

class HerosArmy : public ArmyFactory {
public:
    std::vector<Hobbit *> createHobbits() override;

    std::vector<Elf *> createElfs() override;

    std::vector<Dwarf *> createDwarfs() override;

    std::vector<Magician *> createMagicians() override;

    std::vector<Nazgul *> createNazguls() override;

};