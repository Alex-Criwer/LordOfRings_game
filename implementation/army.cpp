#include "army.h"


void Army::addHobbits(const std::vector<Hobbit *> & armyOfHobbits) {
    for (auto hobbit : armyOfHobbits) {
        hobbits.push_back(hobbit);
    }
}

void Army::addElfs(const std::vector<Elf *>& armyOfElfs) {
    for (auto elf : armyOfElfs) {
        elfs.push_back(elf);
    }
}

void Army::addDwarfs(const std::vector<Dwarf *>& armyOfDwarfs) {
    for (auto dwarf : armyOfDwarfs) {
        dwarfs.push_back(dwarf);
    }
}

void Army::addMagicians(const std::vector<Magician *>& armyOfMagicians) {
    for (auto magician : armyOfMagicians) {
        magicians.push_back(magician);
    }
}

void Army::addNazguls(const std::vector<Nazgul *>& armyOfNazguls) {
    for (auto nazgul : armyOfNazguls) {
        nazguls.push_back(nazgul);
    }
}

Army::~Army() {
    for(auto x : hobbits){
        delete x;
    }
    for(auto x : elfs){
        delete x;
    }
    for(auto x : dwarfs){
        delete x;
    }
    for(auto x : magicians){
        delete x;
    }
    for(auto x : nazguls){
        delete x;
    }
    hobbits.clear();
    elfs.clear();
    dwarfs.clear();
    magicians.clear();
    nazguls.clear();
}


bool operator==(const Army &a, const Army &b) {
    if (a.hobbits.size() != b.hobbits.size() || a.elfs.size() != b.elfs.size() ||
        a.dwarfs.size() != b.dwarfs.size() || a.magicians.size() != b.magicians.size()
        || a.nazguls.size() != b.nazguls.size()) {
        return false;
    }

    for (int i = 0; i < a.hobbits.size(); i++) {
        if ((*a.hobbits[i]) != (*b.hobbits[i])) return false;
    }

    for (int i = 0; i < a.elfs.size(); i++) {
        if ((*a.elfs[i]) != (*b.elfs[i])) return false;
    }

    for (int i = 0; i < a.dwarfs.size(); i++) {
        if ((*a.dwarfs[i]) != (*b.dwarfs[i])) return false;
    }

    for (int i = 0; i < a.magicians.size(); i++) {
        if ((*a.magicians[i]) != (*b.magicians[i])) return false;
    }

    for (int i = 0; i < a.nazguls.size(); i++) {
        if ((*a.nazguls[i]) != (*b.nazguls[i])) return false;
    }

    return true;
}


