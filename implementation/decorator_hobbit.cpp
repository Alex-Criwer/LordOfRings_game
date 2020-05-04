#include "decorator_hobbit.h"

DecoratorHobbit::DecoratorHobbit(MagicCreature *hobbit) : DecoratorMagicCreatures(hobbit) {}

void DecoratorHobbit::go(int x, int y)  {
std::cout << "now your hobbit can shoot from the air" << '\n';
this->magic_creature->go(x, y);
this->magic_creature->shoot(magic_creature->coordinatesAtTheMoment.x, magic_creature->coordinatesAtTheMoment.y);
}

void DecoratorHobbit::abilityToFlyOnGriffins() {
    magic_creature->abilityToFlyOnGriffins = true;
    std::cout << "your hobbit now can fly on griffins" << "\n";
}

void DecoratorHobbit::abilityToBeResaved() {
    ++this->magic_creature->lives;
    this->magic_creature->coordinatesAtTheMoment.x = 0;
    this->magic_creature->coordinatesAtTheMoment.y = 0;
    std::cout << "your hobbit is resaved" << "\n";
}

void DecoratorHobbit::abilityToTalkWithTheAncientForest() {
    std::cout << "now you can understand the language of inhabitants of the ancient forest" << "\n";
}
