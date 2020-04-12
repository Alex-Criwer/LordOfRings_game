#include "villains.h"

const int VILLAINS_HOBBITS = 10,VILLAINS_ELFS = 3, VILLAINS_DWARFS = 10, VILLAINS_MAGICIANS = 3,VILLAINS_NAZGULS = 1;
const int FIELD = 100;

vector<Hobbit *> VillainsArmy::createHobbits() {
    vector<Hobbit *> hobbits;
    for (int i = 0; i < VILLAINS_HOBBITS; ++i) {
        hobbits.push_back(new Hobbit());
        hobbits.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return hobbits;
}

vector<Elf *> VillainsArmy::createElfs() {
    vector<Elf *> elfs;
    for (int i = 0; i < VILLAINS_ELFS; ++i) {
        elfs.push_back(new Elf());
        elfs.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return elfs;
}

vector<Dwarf *> VillainsArmy::createDwarfs() {
    vector<Dwarf *> dwarfs;
    for (int i = 0; i < VILLAINS_DWARFS; ++i) {
        dwarfs.push_back(new Dwarf());
        dwarfs.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return dwarfs;
}

vector<Magician *> VillainsArmy::createMagicians() {
    vector<Magician *> magicians;
    for (int i = 0; i < VILLAINS_MAGICIANS; ++i) {
        magicians.push_back(new Magician());
        magicians.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return magicians;
}

vector<Nazgul *> VillainsArmy::createNazguls() {
    vector<Nazgul *> nazguls;
    for (int i = 0; i < VILLAINS_NAZGULS; ++i) {
        nazguls.push_back(new Nazgul());
        nazguls.back()->coordinatesAtTheMoment.y = FIELD;
    }
    return nazguls;
}
