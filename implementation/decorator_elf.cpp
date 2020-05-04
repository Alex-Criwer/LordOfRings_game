#include "decorator_elf.h"

DecoratorElf::DecoratorElf(MagicCreature *elf) : DecoratorMagicCreatures(elf) {}

void DecoratorElf::go(int x, int y)  {
std::cout << "now your elf can shoot from the air" << '\n';
this->magic_creature->go(x, y);
this->magic_creature->shoot(magic_creature->coordinatesAtTheMoment.x, magic_creature->coordinatesAtTheMoment.y);
}

void DecoratorElf::abilityToFlyOnGriffins() {
    magic_creature->abilityToFlyOnGriffins = true;
    std::cout << "your elf now can fly on griffins" << "\n";
}

void DecoratorElf::abilityToBeResaved() {
    ++this->magic_creature->lives;
    this->magic_creature->coordinatesAtTheMoment.x = 0;
    this->magic_creature->coordinatesAtTheMoment.y = 0;
    std::cout << "your elf is resaved" << "\n";
}

void DecoratorElf::abilityToBeSuperFast() {
    std::cout << "for 3 seconds you can be super fast" << "\n";
}
