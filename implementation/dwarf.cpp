#include "dwarf.h"

Dwarf::Dwarf() {
    lives = DWARF_LIVES;
    coordinatesAtTheMoment.x = rand() % FIELD;
    coordinatesAtTheMoment.y = 0;
    axes = NUMBER_OF_AXES;
}

void Dwarf::go(int x, int y) {
    this->coordinatesAtTheMoment.x = x;
    this->coordinatesAtTheMoment.y = y;
}

void Dwarf::shoot(int whereX, int whereY) const {

};

void Dwarf::hackAnotherCreature(int whereX, int whereY) {
    --axes;
}

Dwarf *Dwarf::clone() {
    return new Dwarf(*this);
}

bool operator!=(const Dwarf &a, const Dwarf &b) {
    return a.lives != b.lives || a.axes != b.axes;
}

void Dwarf::Accept(Visitor *visitor) const {
    visitor->visitorForDwarf(this);
}
