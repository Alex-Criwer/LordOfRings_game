#include "elf.h"

Elf::Elf() {
    lives = ELF_LIVES;
    coordinatesAtTheMoment.x = rand() % FIELD;
    coordinatesAtTheMoment.y = 0;
    arrows = NUMBER_OF_ARROWS;
}

void Elf::go(int x, int y) {
    this->coordinatesAtTheMoment.x = x;
    this->coordinatesAtTheMoment.y = y;
}

void Elf::shoot(int whereX, int whereY) const {

}

void Elf::archery(int whereX, int whereY) {
    --arrows;
};

Elf *Elf::clone() {
    return new Elf(*this);
}


bool operator!=(const Elf &a, const Elf &b) {
    return a.lives != b.lives || a.arrows != b.arrows;
}