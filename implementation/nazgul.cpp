#include "nazgul.h"

Nazgul::Nazgul() {
    lives = NAZGUL_LIVES;
    coordinatesAtTheMoment.x = rand() % FIELD;
    coordinatesAtTheMoment.y = 0;
}

void Nazgul::go(int x, int y) {

}

void Nazgul::shoot(int whereX, int whereY) const {

}

void Nazgul::justToKill() {

}

Nazgul *Nazgul::clone() {
    return new Nazgul(*this);
}

bool operator!=(const Nazgul &a, const Nazgul &b) {
    return a.lives != b.lives;
}
