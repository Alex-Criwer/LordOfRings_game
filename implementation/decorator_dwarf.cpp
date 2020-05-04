#include "decorator_dwarf.h"

DecoratorDwarf::DecoratorDwarf(MagicCreature *dwarf) : DecoratorMagicCreatures(dwarf) {}

void DecoratorDwarf::go(int x, int y) {
    std::cout << "now your dwarf can shoot from the air" << '\n';
    this->magic_creature->go(x, y);
    this->magic_creature->shoot(magic_creature->coordinatesAtTheMoment.x, magic_creature->coordinatesAtTheMoment.y);
}

void DecoratorDwarf::abilityToFlyOnGriffins() {
    magic_creature->abilityToFlyOnGriffins = true;
    std::cout << "your dwarf now can fly on griffins" << "\n";
}

void DecoratorDwarf::abilityToBeResaved() {
    ++this->magic_creature->lives;
    this->magic_creature->coordinatesAtTheMoment.x = 0;
    this->magic_creature->coordinatesAtTheMoment.y = 0;
    std::cout << "your dwarf is resaved" << "\n";
}

void DecoratorDwarf::abilityOfSuperKick() {
    std::cout << "with your hammer you can kill 5 enemies at once" << "\n";
}

