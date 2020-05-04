#pragma once

#include "army_factory.h"

class HerosArmy : public ArmyFactory {
public:
    static const int HEROS_HOBBITS = 1000, HEROS_ELFS = 250, HEROS_DWARFS = 300, HEROS_MAGICIANS = 50, HEROS_NAZGULS = 80;

    std::vector<Hobbit *> createHobbits() override;

    std::vector<Elf *> createElfs() override;

    std::vector<Dwarf *> createDwarfs() override;

    std::vector<Magician *> createMagicians() override;

    std::vector<Nazgul *> createNazguls() override;

};