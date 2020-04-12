#include "army.h"


void Army::addHobbits(vector<Hobbit *> armyOfHobbits) {
    for (auto hobbit : armyOfHobbits) {
        hobbits.push_back(hobbit);
    }
}

void Army::addElfs(vector<Elf *> armyOfElfs) {
    for (auto elf : armyOfElfs) {
        elfs.push_back(elf);
    }
}

void Army::addDwarfs(vector<Dwarf *> armyOfDwarfs) {
    for (auto dwarf : armyOfDwarfs) {
        dwarfs.push_back(dwarf);
    }
}

void Army::addMagicians(vector<Magician *> armyOfMagicians) {
    for (auto magician : armyOfMagicians) {
        magicians.push_back(magician);
    }
}

void Army::addNazguls(vector<Nazgul *> armyOfNazguls) {
    for (auto nazgul : armyOfNazguls) {
        nazguls.push_back(nazgul);
    }
}

Army::~Army() {
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

    vector<Hobbit *> hobbits_a, hobbits_b;
    for (auto unit : a.hobbits) hobbits_a.push_back(unit);
    for (auto unit : b.hobbits) hobbits_b.push_back(unit);
    for (int i = 0; i < hobbits_a.size(); i++) {
        if ((*hobbits_a[i]) != (*hobbits_b[i])) return false;
    }

    vector<Elf *> elfs_a, elfs_b;
    for (auto unit : a.elfs) elfs_a.push_back(unit);
    for (auto unit : b.elfs) elfs_b.push_back(unit);
    for (int i = 0; i < elfs_a.size(); i++) {
        if ((*elfs_a[i]) != (*elfs_b[i])) return false;
    }

    vector<Dwarf *> dwarfs_a, dwarfs_b;
    for (auto unit : a.dwarfs) dwarfs_a.push_back(unit);
    for (auto unit : b.dwarfs) dwarfs_b.push_back(unit);
    for (int i = 0; i < dwarfs_a.size(); i++) {
        if ((*dwarfs_a[i]) != (*dwarfs_b[i])) return false;
    }

    vector<Magician *> magicians_a, magicians_b;
    for (auto unit : a.magicians) magicians_a.push_back(unit);
    for (auto unit : b.magicians) magicians_b.push_back(unit);
    for (int i = 0; i < magicians_a.size(); i++) {
        if ((*magicians_a[i]) != (*magicians_b[i])) return false;
    }

    vector<Nazgul *> nazguls_a, nazguls_b;
    for (auto unit : a.nazguls) nazguls_a.push_back(unit);
    for (auto unit : b.nazguls) nazguls_b.push_back(unit);
    for (int i = 0; i < nazguls_a.size(); i++) {
        if ((*nazguls_a[i]) != (*nazguls_b[i])) return false;
    }

    return true;
}


