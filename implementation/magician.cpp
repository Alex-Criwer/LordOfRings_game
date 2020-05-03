#include "magician.h"

Magician::Magician() {
    lives = MAGICIAN_LIVES;
    coordinatesAtTheMoment.x = rand() % FIELD;
    coordinatesAtTheMoment.y = 0;
    numberOfBonus = NUMBER_OF_BONUS_JUST_TO_KILL;
}

void Magician::go(int x, int y) {
    this->coordinatesAtTheMoment.x = x;
    this->coordinatesAtTheMoment.y = y;
}

void Magician::shoot(int whereX, int whereY) const {

}

void Magician::justToKill() {
    --numberOfBonus;
}

void Magician::useMagic() {

}

Magician *Magician::clone() {
    return new Magician(*this);
}

bool operator!=(const Magician &a, const Magician &b) {
    return a.lives != b.lives || a.numberOfBonus != b.numberOfBonus;
}
