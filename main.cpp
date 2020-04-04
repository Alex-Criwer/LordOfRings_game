#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

const int HEROS_HOBBITS = 20, VILLAINS_HOBBITS = 10, HEROS_ELFS = 5,VILLAINS_ELFS = 3, HEROS_DWARFS = 5, VILLAINS_DWARFS = 10;
const int HEROS_MAGICIANS = 2, VILLAINS_MAGICIANS = 3, HEROS_NAZGULS = 1,VILLAINS_NAZGULS = 1;
const int FIELD = 100;
const int HOBBIT_LIVES = 3, ELF_LIVES = 10, DWARF_LIVES = 5, MAGICIAN_LIVES = 20, NAZGUL_LIVES = 50;
const int HOBBIT_STRENGTH = 10, ELF_STRENGTH = 25, DWARF_STRENGTH = 25, MAGICIAN_STRENGTH = 50, NAZGUL_STRENGTH = 100;
const int NUMBER_OF_ARROWS = 10, NUMBER_OF_AXES = 10, NUMBER_OF_BONUS_JUST_TO_KILL = 3;

class Point {
public:
    int x;
    int y;
};

class MagicCreature {
public:
    int lives;
    Point coordinatesAtTheMoment;
    int strength;

    virtual void handToHandCombat() = 0;

    virtual void go(int x, int y) = 0;

    virtual void shoot(int whereX, int whereY) const = 0;

    virtual MagicCreature *clone() = 0;
};

class Hobbit : public MagicCreature {
public:
    Hobbit() {
        lives = HOBBIT_LIVES;
        strength = HOBBIT_STRENGTH;
        coordinatesAtTheMoment.x = rand() % FIELD;              //или так, что вводит пользователь
        coordinatesAtTheMoment.y = 0;               //аналогично
    }

    void handToHandCombat() {
        int impactForce = this->strength;
    }

    void go(int x, int y) {};

    void shoot(int whereX, int whereY) const {};

    Hobbit *clone() {
        return new Hobbit(*this);
    }
};

class Elf : public MagicCreature {
private:
    int arrows;
public:
    Elf() {
        lives = ELF_LIVES;
        strength = ELF_STRENGTH;
        coordinatesAtTheMoment.x = rand() % FIELD;              //или так, что вводит пользователь
        coordinatesAtTheMoment.y = 0;
        arrows = NUMBER_OF_ARROWS;
    }

    void handToHandCombat() {
        int impactForce = this->strength;
    }

    void go(int x, int y) {};

    void shoot(int whereX, int whereY) const {};

    void archery(int whereX, int whereY) {
        --arrows;
    };

    Elf *clone() {
        return new Elf(*this);
    }

};

class Dwarf : public MagicCreature {
private:
    int axes;
public:
    Dwarf() {
        lives = DWARF_LIVES;
        strength = DWARF_STRENGTH;
        coordinatesAtTheMoment.x = rand() % FIELD;              //или так, что вводит пользователь
        coordinatesAtTheMoment.y = 0;
        axes = NUMBER_OF_AXES;
    }

    void handToHandCombat() {
        int impactForce = this->strength;
    }

    void go(int x, int y) {};

    void shoot(int whereX, int whereY) const {};

    void hackAnotherCreature(int whereX, int whereY) {            //или только если рядом, без нацеливания
        --axes;
    }

    Dwarf *clone() {
        return new Dwarf(*this);
    }

};

class Magician : public MagicCreature {
private:
    int numberOfBonus;
public:
    Magician() {
        lives = MAGICIAN_LIVES;
        strength = MAGICIAN_STRENGTH;
        coordinatesAtTheMoment.x = rand() % FIELD;              //или так, что вводит пользователь
        coordinatesAtTheMoment.y = 0;
        numberOfBonus = NUMBER_OF_BONUS_JUST_TO_KILL;
    }

    void handToHandCombat() {
        int impactForce = this->strength;
    }

    void go(int x, int y) {};

    void shoot(int whereX, int whereY) const {};

    void justToKill() {
        --numberOfBonus;
    };

    void useMagic() {};

    Magician *clone() {
        return new Magician(*this);
    }
};

class Nazgul : public MagicCreature {
private:
public:
    Nazgul() {
        lives = NAZGUL_LIVES;
        strength = NAZGUL_STRENGTH;
        coordinatesAtTheMoment.x = rand() % FIELD;              //или так, что вводит пользователь
        coordinatesAtTheMoment.y = 0;
    }

    void handToHandCombat() {
        int impactForce = this->strength;
    }

    void go(int x, int y) {};

    void shoot(int whereX, int whereY) const {};

    void justToKill() {};

    Nazgul *clone() {
        return new Nazgul(*this);
    }
};

class Military{
private:
    vector<Hobbit *> hobbits;
    vector<Elf *> elfs;
    vector<Dwarf *> dwarfs;
    vector<Magician *> magicians;
    vector<Nazgul *> nazguls;
public:
    void addHobbits(vector<Hobbit*> armyOfHobbits){
        for(auto hobbit : armyOfHobbits){
            hobbits.push_back(hobbit);
        }
    }
    void addElfs(vector<Elf*> armyOfElfs){
        for(auto elf : armyOfElfs){
            elfs.push_back(elf);
        }
    }
    void addDwarfs(vector<Dwarf*> armyOfDwarfs){
        for(auto dwarf : armyOfDwarfs){
            dwarfs.push_back(dwarf);
        }
    }
    void addMagicians(vector<Magician*> armyOfMagicians){
        for(auto magician : armyOfMagicians){
            magicians.push_back(magician);
        }
    }
    void addNazguls(vector<Nazgul*> armyOfNazguls){
        for(auto nazgul : armyOfNazguls){
            nazguls.push_back(nazgul);
        }
    }
    ~Military() {
        hobbits.clear();
        elfs.clear();
        dwarfs.clear();
        magicians.clear();
        nazguls.clear();
    }
};

class MilitaryFactory{
public:
    virtual vector <Hobbit*> createHobbits() = 0;
    virtual vector <Elf*> createElfs() = 0;
    virtual vector <Dwarf*> createDwarfs() = 0;
    virtual vector <Magician*> createMagicians() = 0;
    virtual vector <Nazgul*> createNazguls() = 0;
};

class HerosArmy : public MilitaryFactory{
public:
    vector<Hobbit*> createHobbits() override{
        vector<Hobbit*> hobbits;
        for (int i = 0; i < HEROS_HOBBITS; ++i) {
            Hobbit* temp = new Hobbit;
            hobbits.push_back(temp);
        }
        return hobbits;
    }

    vector<Elf*> createElfs() override{
        vector<Elf*> elfs;
        for (int i = 0; i < HEROS_ELFS; ++i) {
            Elf* temp = new Elf;
            elfs.push_back(temp);
        }
        return elfs;
    }

    vector<Dwarf*> createDwarfs() override{
        vector<Dwarf*> dwarfs;
        for (int i = 0; i < HEROS_DWARFS; ++i) {
            Dwarf* temp = new Dwarf;
            dwarfs.push_back(temp);
        }
        return dwarfs;
    }
    vector<Magician*> createMagicians() override{
        vector<Magician*> magicians;
        for (int i = 0; i < HEROS_MAGICIANS; ++i) {
            Magician* temp = new Magician;
            magicians.push_back(temp);
        }
        return magicians;
    }
    vector<Nazgul*> createNazguls() override{
        vector<Nazgul*> nazguls;
        for (int i = 0; i < HEROS_NAZGULS; ++i) {
            Nazgul* temp = new Nazgul;
            nazguls.push_back(temp);
        }
        return nazguls;
    }
};

class VillainsArmy : public MilitaryFactory{
public:
    vector<Hobbit*> createHobbits() override{
        vector<Hobbit*> hobbits;
        for (int i = 0; i < VILLAINS_HOBBITS; ++i) {
            Hobbit* temp = new Hobbit;
            temp->coordinatesAtTheMoment.y = FIELD;
            hobbits.push_back(temp);
        }
        return hobbits;
    }

    vector<Elf*> createElfs() override{
        vector<Elf*> elfs;
        for (int i = 0; i < VILLAINS_ELFS; ++i) {
            Elf* temp = new Elf;
            temp->coordinatesAtTheMoment.y = FIELD;
            elfs.push_back(temp);
        }
        return elfs;
    }

    vector<Dwarf*> createDwarfs() override{
        vector<Dwarf*> dwarfs;
        for (int i = 0; i < VILLAINS_DWARFS; ++i) {
            Dwarf* temp = new Dwarf;
            temp->coordinatesAtTheMoment.y = FIELD;
            dwarfs.push_back(temp);
        }
        return dwarfs;
    }
    vector<Magician*> createMagicians() override{
        vector<Magician*> magicians;
        for (int i = 0; i < VILLAINS_MAGICIANS; ++i) {
            Magician* temp = new Magician;
            temp->coordinatesAtTheMoment.y = FIELD;
            magicians.push_back(temp);
        }
        return magicians;
    }
    vector<Nazgul*> createNazguls() override{
        vector<Nazgul*> nazguls;
        for (int i = 0; i < VILLAINS_NAZGULS; ++i) {
            Nazgul* temp = new Nazgul;
            temp->coordinatesAtTheMoment.y = FIELD;
            nazguls.push_back(temp);
        }
        return nazguls;
    }
};

class TheLordOfTheRings{
public:
    Military* createArmy(MilitaryFactory& factory){
        Military* newArmy = new Military;
        newArmy->addHobbits(factory.createHobbits());
        newArmy->addElfs(factory.createElfs());
        newArmy->addDwarfs(factory.createDwarfs());
        newArmy->addMagicians(factory.createMagicians());
        newArmy->addNazguls(factory.createNazguls());
        return newArmy;
    }
};

int main(){
    TheLordOfTheRings myGame;
    HerosArmy FrodosArmy;
    Military* heros = myGame.createArmy(FrodosArmy);
    VillainsArmy SayronsArmy;
    Military* villains = myGame.createArmy(SayronsArmy);
    return 0;
}