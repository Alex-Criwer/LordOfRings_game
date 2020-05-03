#include "detachment.h"


Detachment::Detachment(Army *army,const int numberOfHobbits,const int numberOfElfs,const int numberOfDwarfs, const int numberOfMagicians,
                       const int numberOfNazguls) {
    std::vector<Hobbit *> *hobbit = getVectorOfHobbits(army);
    std::vector<Elf *> *elfs = getVectorOfElfs(army);
    std::vector<Dwarf *> *dwarfs = getVectorOfDwarfs(army);
    std::vector<Magician *> *magicians = getVectorOfMagicians(army);
    std::vector<Nazgul *> *nazguls = getVectorOfNazguls(army);
    int counter = 0;
    for (auto &hobbit_player: *hobbit) {
        if (counter < numberOfHobbits) {
            new_detechment.push_back(hobbit_player);
            ++counter;
        } else {
            counter = 0;
            break;
        }
    }
    for (auto &elf_player: *elfs) {
        if (counter < numberOfElfs) {
            new_detechment.push_back(elf_player);
            ++counter;
        } else {
            counter = 0;
            break;
        }
    }
    for (auto &dwarf_player: *dwarfs) {
        if (counter < numberOfDwarfs) {
            new_detechment.push_back(dwarf_player);
            ++counter;
        } else {
            counter = 0;
            break;
        }
    }
    for (auto &magician_player: *magicians) {
        if (counter < numberOfMagicians) {
            new_detechment.push_back(magician_player);
            ++counter;
        } else {
            counter = 0;
            break;
        }
    }
    for (auto &nazgul_player: *nazguls) {
        if (counter < numberOfNazguls) {
            new_detechment.push_back(nazgul_player);
            ++counter;
        } else {
            counter = 0;
            break;
        }
    }

}

void Detachment::addMagicCreature(MagicCreature *magic_creature) {
    new_detechment.push_back(magic_creature);
}

void Detachment::detechmentShoot(const int whereX, const int whereY) {
    for (auto magic_creature : new_detechment) {
        magic_creature->shoot(whereX, whereY);
    }
}

void Detachment::detechmentGo(const int x, const int y) {
    for (auto magic_creature : new_detechment) {
        magic_creature->go(x, y);
    }
}


void Detachment::makeSuperDetachment() {
    for (int i = 0; i < new_detechment.size(); ++i) {
        MagicCreature *unit = new_detechment[i];
        if (dynamic_cast<Hobbit *>(unit) != nullptr) {
            MagicCreature *hobbit = new Hobbit;
            MagicCreature *decorator = new DecoratorHobbit(hobbit);
            new_detechment[i] = decorator;
            delete hobbit;
            delete decorator;
        }

        if (dynamic_cast<Elf *>(unit) != nullptr) {
            MagicCreature *elf = new Elf;
            MagicCreature *decorator = new DecoratorElf(elf);
            new_detechment[i] = decorator;
            delete elf;
            delete decorator;
        }

        if (dynamic_cast<Dwarf *>(unit) != nullptr) {
            MagicCreature *dwarf = new Dwarf;
            MagicCreature *decorator = new DecoratorDwarf(dwarf);
            new_detechment[i] = decorator;
            delete dwarf;
            delete decorator;
        }
    }
    std::cout << "you have made a super detachment" << '\n';
}

Detachment::~Detachment() {
    new_detechment.clear();
}

std::vector<MagicCreature *> *getVectorOfCreatures(Detachment *myDetachment) {
    return &(myDetachment->new_detechment);
}

Detachment::Detachment() = default;
