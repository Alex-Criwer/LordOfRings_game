#include "heros.h"

std::vector<Hobbit *> HerosArmy::createHobbits() {
    std::vector<Hobbit *> hobbits_;
    for (int i = 0; i < HEROS_HOBBITS; ++i) {
        hobbits_.push_back(new Hobbit());
    }
    return hobbits_;
}

std::vector<Elf *> HerosArmy::createElfs() {
    std::vector<Elf *> elfs_;
    for (int i = 0; i < HEROS_ELFS; ++i) {
        elfs_.push_back(new Elf());
    }
    return elfs_;
}

std::vector<Dwarf *> HerosArmy::createDwarfs() {
    std::vector<Dwarf *> dwarfs_;
    for (int i = 0; i < HEROS_DWARFS; ++i) {
        dwarfs_.push_back(new Dwarf());
    }
    return dwarfs_;
}

std::vector<Magician *> HerosArmy::createMagicians() {
    std::vector<Magician *> magicians_;
    for (int i = 0; i < HEROS_MAGICIANS; ++i) {
        magicians_.push_back(new Magician());
    }
    return magicians_;
}

std::vector<Nazgul *> HerosArmy::createNazguls() {
    std::vector<Nazgul *> nazguls_;
    for (int i = 0; i < HEROS_NAZGULS; ++i) {
        nazguls_.push_back(new Nazgul());
    }
    return nazguls_;
}
