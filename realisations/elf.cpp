#include "elf.h"

const int FIELD = 100, HEROS_ELFS = 5, ELF_LIVES = 10, NUMBER_OF_ARROWS = 10;

Elf::Elf() {
    lives = ELF_LIVES;
    coordinatesAtTheMoment.x = rand() % FIELD;
    coordinatesAtTheMoment.y = 0;
    arrows = NUMBER_OF_ARROWS;
}

void Elf::go(int x, int y) {

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