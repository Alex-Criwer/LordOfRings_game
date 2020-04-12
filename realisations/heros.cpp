#include "heros.h"

vector<Hobbit *> HerosArmy::createHobbits() {
    vector<Hobbit *> hobbits_;
    for (int i = 0; i < HEROS_HOBBITS; ++i) {
        hobbits_.push_back(new Hobbit());
    }
    return hobbits_;
}

vector<Elf *> HerosArmy::createElfs() {
    vector<Elf *> elfs_;
    for (int i = 0; i < HEROS_ELFS; ++i) {
        elfs_.push_back(new Elf());
    }
    return elfs_;
}

vector<Dwarf *> HerosArmy::createDwarfs() {
    vector<Dwarf *> dwarfs_;
    for (int i = 0; i < HEROS_DWARFS; ++i) {
        dwarfs_.push_back(new Dwarf());
    }
    return dwarfs_;
}

vector<Magician *> HerosArmy::createMagicians() {
    vector<Magician *> magicians_;
    for (int i = 0; i < HEROS_MAGICIANS; ++i) {
        magicians_.push_back(new Magician());
    }
    return magicians_;
}

vector<Nazgul *> HerosArmy::createNazguls() {
    vector<Nazgul *> nazguls_;
    for (int i = 0; i < HEROS_NAZGULS; ++i) {
        nazguls_.push_back(new Nazgul());
    }
    return nazguls_;
}
