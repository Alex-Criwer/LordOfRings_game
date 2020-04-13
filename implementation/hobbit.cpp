#include "hobbit.h"

Hobbit::Hobbit() {
    lives = HOBBIT_LIVES;
    coordinatesAtTheMoment.x = rand() % FIELD;
    coordinatesAtTheMoment.y = 0;
}

void Hobbit::go(int x, int y) {

}

void Hobbit::shoot(int whereX, int whereY) const {

}

Hobbit *Hobbit::clone() {
    return new Hobbit(*this);
}

bool operator!=(const Hobbit &a, const Hobbit &b) {
    return a.lives != b.lives;
}
