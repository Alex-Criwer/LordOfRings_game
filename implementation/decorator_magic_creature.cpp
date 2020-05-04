#include "decorator_magic_creature.h"


DecoratorMagicCreatures::DecoratorMagicCreatures(MagicCreature* magic_creature): magic_creature(magic_creature){}

void DecoratorMagicCreatures::go(int x, int y) {
return this->magic_creature->go(x,y);
}
void DecoratorMagicCreatures::shoot(int whereX, int whereY) const{
return this->magic_creature->shoot(whereX,whereY);
}

MagicCreature * DecoratorMagicCreatures::clone() {
return this->magic_creature->clone();
}
