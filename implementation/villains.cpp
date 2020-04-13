#include "villains.h"

std::vector<Hobbit *> VillainsArmy::createHobbits() {
    std::vector<Hobbit *> hobbits;
    for (int i = 0; i < VILLAINS_HOBBITS; ++i) {
        hobbits.push_back(new Hobbit());
        hobbits.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return hobbits;
}

std::vector<Elf *> VillainsArmy::createElfs() {
    std::vector<Elf *> elfs;
    for (int i = 0; i < VILLAINS_ELFS; ++i) {
        elfs.push_back(new Elf());
        elfs.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return elfs;
}

std::vector<Dwarf *> VillainsArmy::createDwarfs() {
    std::vector<Dwarf *> dwarfs;
    for (int i = 0; i < VILLAINS_DWARFS; ++i) {
        dwarfs.push_back(new Dwarf());
        dwarfs.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return dwarfs;
}

std::vector<Magician *> VillainsArmy::createMagicians() {
    std::vector<Magician *> magicians;
    for (int i = 0; i < VILLAINS_MAGICIANS; ++i) {
        magicians.push_back(new Magician());
        magicians.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return magicians;
}

std::vector<Nazgul *> VillainsArmy::createNazguls() {
    std::vector<Nazgul *> nazguls;
    for (int i = 0; i < VILLAINS_NAZGULS; ++i) {
        nazguls.push_back(new Nazgul());
        nazguls.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return nazguls;
}
